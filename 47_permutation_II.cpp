class Solution {
public:
    void backTrack(vector<int> &temp , vector<vector<int>> &ans , vector<bool> &used, vector<int> nums){
        if(temp.size() == nums.size()){
            ans.push_back(temp) ;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(used[i] || (i > 0 && nums[i] == nums[i-1] && !used[i-1])) continue ; 
            temp.push_back(nums[i]) ; 
            used[i] = true ;
            backTrack(temp, ans, used, nums);
            used[i] = false ; 
            temp.pop_back();

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<bool> used(nums.size() , false);
        vector<int> temp ; 
        sort(nums.begin() , nums.end()) ;
        vector<vector<int>> ans ;
        backTrack(temp, ans , used,nums);  
        return ans; 
    }
};

class Solution {
public:
    void backTrack(vector<int> &temp , vector<vector<int>> &sol , int start , vector<int> nums){
        sol.push_back(temp);
        for(int i = start ; i< nums.size() ; i++){
            if(i > start && nums[i-1] == nums[i]) continue ; 
            temp.push_back(nums[i]) ; 
            backTrack(temp, sol,i+1 , nums );
            temp.pop_back() ;
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp ; 
        vector<vector<int>> sol ;
        backTrack(temp, sol, 0,nums);
        return sol ;
    }
};

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> compute(1 , 0);
        vector<bool> ans ;
        for(int i = 1 , j= 0; i < nums.size() ; i++){
            if(nums[i-1]%2 == nums[i]%2) j++ ; 
            compute.push_back(j) ; 
        }   

        for(auto it : queries){
            ans.push_back(compute[it[0]] == compute[it[1]]); 
        }
        return ans ;
    }
};

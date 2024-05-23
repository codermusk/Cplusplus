class Solution {
public:
    void backTrack(vector<int> &vec , vector<vector<int>> &sol , int remain, int index ,vector<int> nums){
        if(remain < 0) return ; 
        else if(remain == 0) sol.push_back(vec) ; 
        else{
        for(int i = index ; i < nums.size() ; i++ ){
            vec.push_back(nums[i]);
            backTrack(vec,sol,remain-nums[i] , i , nums);
            vec.pop_back();
        }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sol ; 
        vector<int> temp ; 
        backTrack(temp,sol,target,0,candidates);
        return sol;
    }
};

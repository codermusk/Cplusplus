class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int need = 0 , res = 0 ; 
        sort(nums.begin(), nums.end()) ; 
        for(auto it : nums){
            res += max(need-it,0);
            need = max(it,need)+1;
        }
        return res ; 
    }
};
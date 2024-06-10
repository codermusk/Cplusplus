class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefixSum = 0 ; 
        int pre = 0 ; 
        set<int> checkMod ; 
        for(int i = 0; i < nums.size() ; i++){
            prefixSum+=nums[i] ; 
            int mod = prefixSum % k ; 
            if(checkMod.find(mod)!=checkMod.end()){
                return true ;
            }
            checkMod.insert(pre);
            pre = mod ;
        }
        return false ;
    }
};
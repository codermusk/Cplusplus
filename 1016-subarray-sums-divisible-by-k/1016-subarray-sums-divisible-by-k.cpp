class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int presum = 0 , ans = 0 ; 
        unordered_map<int , int > cntoc ; 
        cntoc[0] = 1 ; 
        for(auto it: nums){
            presum+=it ;
            int mod = presum % k ; 
            if(mod < 0) mod+=k ; 
            ans+=cntoc[mod];
            cntoc[mod]++;
        }  
        return ans ;
    }
};
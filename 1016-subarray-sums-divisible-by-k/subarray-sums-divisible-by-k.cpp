class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int presum = 0 , ans = 0 ; 
        unordered_map<int , int > cntoc ; 
        cntoc[0] = 1 ; 
        for(auto it: nums){
            presum = (presum+it%k +k)%k ;
            ans+=cntoc[presum];
            cntoc[presum]++;
        }  
        return ans ;
    }
};
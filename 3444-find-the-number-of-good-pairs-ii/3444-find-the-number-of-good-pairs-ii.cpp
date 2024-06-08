class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans = 0 ; 
        unordered_map<int , int> mp ; 
        for(auto it : nums2){
            mp[it*k]++;
        }
        for(auto n : nums1){
            if(n % k !=0 )continue ;
            for(int i = 1 ; i<=sqrt(n); i++){
                if(n%i!=0) continue ;
                int f1 = i , f2 = n/i ; 
                ans+=mp[f1];
                if(f1!=f2) ans+=mp[f2];
            }
        }
        return ans ;
    }
};
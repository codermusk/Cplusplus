class Solution {
public:
    unordered_map<int, unordered_map<char, int>> mp ; 
    void compute(int val){
        string s = to_string(val) ; 
        for(int i = 0 ; i < s.size() ; i ++){
            mp[i][s[i]]++ ; 
        }
    }
    long long sumDigitDifferences(vector<int>& nums) {
        int n = nums.size(); 
        for(auto it : nums) compute(it);
        long long ans = 0 ;

        for(auto it : nums){
            string s = to_string(it) ; 
            for(int i = 0 ; i<s.size(); i++){
                char c = s[i] ;  
                ans+= (n*1ll - mp[i][c]) ; 
            }
        }
        return ans/2 ; 
    }
};

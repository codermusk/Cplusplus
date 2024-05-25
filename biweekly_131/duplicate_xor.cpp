class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int , int> mp ; 
        for(int i : nums){
            mp[i]++ ; 
        }
        int xorval = 0 ; 
        for(auto [num, value] : mp){
            if(value == 2){
                xorval = (xorval  ^ num);
            }
        }
        return xorval ; 
    }
};

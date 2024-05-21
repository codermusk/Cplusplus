class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int orTotal = 0 ;
        for(auto & i : nums){
            orTotal|= i ;
        }
        return orTotal * (1 << (nums.size()-1)) ;
    }

};

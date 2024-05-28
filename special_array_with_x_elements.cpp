class Solution {
public:
    int countOf(int number,vector<int> nums){
        int val = 0 ;
        for(int i : nums){
            if(i >= number)
            val++;
        }
        return val ;
    }
    int specialArray(vector<int>& nums) {
        int start = 0 , end = nums.size()  ; 
        while(start <= end) {
            int mid = start + (end - start) / 2 ;
            int  ans = countOf(mid,nums);
            if(ans==mid){
                return mid ;
            }else if(ans > mid){
                start = mid+1 ;
            }else{
                end = mid - 1; 
            }
        }
        return -1 ;
    }
};
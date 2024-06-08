class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
      int n = nums.length ; 
      int pre =0 ;
      int sum = 0 ;
      int mod = 0 ;
      Set<Integer> set = new HashSet<>();
      for(int i = 0 ; i<n ; i++){
        sum+=nums[i];
        mod = k==0? sum:sum%k;
        if(set.contains(mod)) return true ;
        set.add(pre);
        pre = mod ;
        }
      return false ;
        
    }
}
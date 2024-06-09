class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        Map<Integer , Integer > map = new HashMap<>();
        map.put(0,1);
        int sum = 0 ; 
        int rescnt = 0 ; 
        for(int i : nums){
            sum+=i;
            int mod = sum%k; 
            if(mod<0) mod+=k ; 
            rescnt += map.getOrDefault(mod,0);
            map.merge(mod, 1  , Integer::sum);
            
        }
        return rescnt ; 
    }
}
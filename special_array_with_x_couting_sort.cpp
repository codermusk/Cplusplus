class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> countSort(n+1 , 0) ; 
        cout << countSort.size() ;
        for(auto it : nums) countSort[min(n,it)]++;
        int val = 0 ;
        for(int i = n ; i>=0 ;i--){
            val+=countSort[i];
            if(i==val) return i ;    
        }
        return -1 ;
    }
};

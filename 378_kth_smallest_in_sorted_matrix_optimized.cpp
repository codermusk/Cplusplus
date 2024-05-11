class Solution {
public:
    int countOfNumbers(vector<vector<int>> matrix , int val){
        int count = 0 , size = matrix.size(); 

        for(int i = 0 ; i < size ; i++ ){
            count+= upper_bound(matrix[i].begin() , matrix[i].end() , val)- matrix[i].begin() ;  
        }

        return count ; 
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), m = matrix.size() ; 
        int l = matrix[0][0] , r = matrix[n-1][m-1] ; 
        int ans = -1 ; 
        while(l<=r){
            int mid = l + (r-l) /2 ; 
            int count = countOfNumbers(matrix , mid) ;
            if(count>=k){
                ans = mid ; 
                r = mid -1 ; 
            } else{
                l = mid+1; 
            }
        }
return ans ; 
    }
};

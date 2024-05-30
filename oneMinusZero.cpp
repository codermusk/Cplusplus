class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size() ;
        int c = grid[0].size() ; 
        vector<int> rowsz(n,0) ; 
        vector<int> colsz(c,0);
        vector<int> rowso(n,0) ; 
        vector<int> colso(c,0);
        for(int i = 0 ; i < n ; i++){
            int ro = 0, rz  = 0 ;
            for(auto it : grid[i]){
                if(it == 1)ro++;
                else rz++;
            }
            rowsz[i] = rz ; 
            rowso[i] = ro ;
        }

        for(int i = 0 ; i < c ; i++){
            int cz = 0 , co = 0 ;
            for(int j = 0 ; j < n ; j++){
                if(grid[j][i]==0) cz++;
                else co++;
            }
            colsz[i] = cz ; 
            colso[i] = co ;
        }
        vector<vector<int>> ans(n,vector<int>(c,0)) ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < c ; j++){
                ans[i][j] = (rowso[i]+colso[j]-rowsz[i]-colsz[j]) ;
            }
        }
        return ans ;
    }
};

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        
        int r = grid.size() , c = grid[0].size() ; 
        for(int i = 0  ; i < c ; i++){
            for(int j = 0 ; j< r-1 ; j++){
                if(grid[j][i]!=grid[j+1][i])
                return false ;
            }
        }

        // optimize it further by checking only the left side hence rows remains equal
        for(int i = 1 ; i<c ; i++){
            if(grid[0][i] == grid[0][i-1]) return false ; 
        }
        return true ; 
    }
};

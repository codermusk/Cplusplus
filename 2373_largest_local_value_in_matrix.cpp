class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int r = grid.size() , c = grid[0].size() ; 
        vector<vector<int>> ans ; 
        for(int i = 0 ; i < r-2 ; i++){
            vector<int> sol ; 
            for(int j = 0 ; j < c-2 ; j++){
                int val1 = max({grid[i][j] , grid[i][j+1], grid[i][j+2]});
                int val2 = max({grid[i+1][j] , grid[i+1][j+1], grid[i+1][j+2]});
                int val3 = max({grid[i+2][j] , grid[i+2][j+1], grid[i+2][j+2]});
                int value = max({val1,val2,val3});
                sol.push_back(value);
            }
            ans.push_back(sol);
        }
        return ans ; 
    }
};

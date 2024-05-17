class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int rowBegin = 0 , colBegin = 0 , rowEnd = ans.size() - 1 , colEnd = ans[0].size() -1, val = 0 ; 
        while(rowBegin<= rowEnd && colBegin<=colEnd){
            for(int i = colBegin ; i<=colEnd ; i++){
                ans[rowBegin][i] = ++val ; 
            }
            rowBegin++; 
            for(int i = rowBegin ; i <= rowEnd ; i++){
                ans[i][colEnd] = ++val ; 
            }
            colEnd -- ; 

            if(rowBegin<=rowEnd){
                for(int i = colEnd ; i>=colBegin ; i--){
                    ans[rowEnd][i] = ++val;
                }
            }
            rowEnd -- ; 
            if(colBegin<=colEnd){
                for(int i = rowEnd ; i>=rowBegin ; i--){
                    ans[i][colBegin] = ++val;
                }
            }
            colBegin++ ; 
        }
        return ans ; 
    }
};

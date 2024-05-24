class Solution {
public:
 bool isValid(vector<string> temp , int row , int col, int n){
        for(int i = 0 ; i<n ; i++){
            if(temp[i][col]=='Q') return false ;
        }

        for(int i = row-1 , j = col-1 ; i>=0 && j>=0 ; i-- , j--){
            if(temp[i][j]=='Q') return false ;
        }

        for(int i = row-1 , j = col+1 ; i>=0 && j<n ; i-- , j++){
            if(temp[i][j]=='Q') return false ;
        }
        return true ;
    }
    void backTrack(int &ans , vector<string> &temp, int row, int n){
        if(row==n){
            ans++ ;
            return ;
        }
        for(int i = 0 ; i!=n ; i++){
            if(isValid(temp, row, i, n)){
                temp[row][i] = 'Q' ; 
                backTrack(ans, temp , row+1 , n);
                temp[row][i] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string>temp(n, string(n,'.'));
        int ans = 0 ;
        backTrack(ans, temp, 0, n);
        return ans ;
    }
};

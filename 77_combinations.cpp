class Solution {
public:
    void backTrack(vector<int>& temp, vector<vector<int>> &sol , int start , int end, int k){
        if(temp.size()==k) sol.push_back(temp) ; 
        for(int i = start ; i<=end ; i++){
            temp.push_back(i) ;
            backTrack(temp, sol, i+1, end, k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp ; 
        vector<vector<int>> sol ; 
        backTrack(temp , sol , 1, n, k);
        return sol ;
    }
};

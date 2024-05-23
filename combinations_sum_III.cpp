class Solution {
public:
    void backTrack(vector<int> &temp , vector<vector<int>> &ans, int start , int n, int remain){
        if(remain < 0 || temp.size()>n) return ; 
        else if(remain == 0 && temp.size()==n) ans.push_back(temp);
        else{
            for(int i =start ; i <=9 ; i++){
                temp.push_back(i);
                backTrack(temp,ans,i+1,n,remain-i);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans ; 
        vector<int> temp ; 
        backTrack(temp , ans , 1 , k , n);
        return ans ;
    }
};

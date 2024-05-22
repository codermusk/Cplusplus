class Solution {
public:
    void backTrack(int index, string s , vector<string> &temp , vector<vector<string>> &sol){
        if(index == s.size()) { 
            sol.push_back(temp) ; 
            return ;
        }
        for(int i = index ; i < s.size() ; i++){
            string sub = s.substr(index , i-index+1) ; 
            if(equal(sub.begin(), sub.end(), sub.rbegin())){
                temp.push_back(sub); 
                backTrack(i+1,s,temp,sol);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans ;
        if(s.empty()) return ans;
        vector<string> temp ; 
        backTrack(0,s,temp,ans);
        return ans;
    }
};

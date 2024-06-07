class Solution {
public:
    string removeOuterParentheses(string s) {
        int openCount = 0 ; 
        string ans ; 
        for(auto it : s){
            if(it=='(' && openCount++ > 0){
                ans.push_back(it);
            }
            if(it == ')' && openCount-- > 1){
                ans.push_back(it);
            }
        }
        return ans ;
    }
};
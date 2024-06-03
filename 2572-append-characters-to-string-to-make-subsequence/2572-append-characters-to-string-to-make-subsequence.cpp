class Solution {
public:
    int appendCharacters(string s, string t) {
        int l = s.size(), r = t.size() , i = 0 , j = 0; 
        for(; i<l&&j<r ; i++){
            if(s[i]==t[j]){
                j++;
            }
        }  
        return r - j ; 
    }
};
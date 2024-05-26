class Solution {
public:
    string compressedString(string word) {
        int start = 0,end=0 , i = 0;
        string ans ; 
        if(word.size()==1){
            ans.push_back('1');
            ans.push_back(word[0]);
            return ans ;
        }
        while(i < word.size()){
            if(i!=word.size() && word[i] == word[i+1]){
                end++;
                if(end == start + 9){
                    ans.push_back('9');
                    ans.push_back(word[i]);
                    start = end ;
                    end = i + 1 ;
                }
                i++ ;
            }else{
                ans.push_back('0' + end-start+1);
                ans.push_back(word[i]);
                start = i+1 ; 
                end = i+1 ;
                i++ ;
            }
        }
        return ans ;
    }
};

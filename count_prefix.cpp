class Solution {
public:
    bool isPrefix(string word1 , string word2){
        if(word1.size() > word2.size()) return false ;
        int len = word1.size() ; 
        string temp = word2.substr(0,len);
        cout << temp ;
        string temp2 = word2.substr(word2.size() - len); 
        cout << temp2 ;
        cout << endl ;
        return temp2 == word1 && word1 == temp;

    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0 ;
        for(int i = 0 ; i < words.size() - 1 ; i++){
            for(int j = i+1 ; j < words.size() ; j++){
                if(isPrefix(words[i] , words[j])) ans++ ;
            }
        } 
        return ans ;
    }
};

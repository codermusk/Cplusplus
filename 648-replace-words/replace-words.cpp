class Trie{
public:
    bool isEnd ; 
    Trie* words[26];
    Trie(){
        isEnd = false ;
        for(int i = 0 ; i < 26 ; i++){
            words[i] = NULL ;
        }
    }
    
};
class Solution {
    Trie* root = new Trie() ;
    void insert(string word){
        Trie* current = root ;
        for(auto it:word){
            if(!current->words[it-'a']){
                current->words[it-'a'] = new Trie();
            }
            current = current -> words[it-'a'];
        }
        current->isEnd = true ;
    }

    string search(string word){
        Trie* curr = root ;
        string ret = "";
        for(int i = 0 ; i < word.size(); i++){
            if(!curr->words[word[i]-'a']){
                if(curr->isEnd) return ret ;
                return word ;
            }
            ret+=word[i];
            curr = curr->words[word[i]-'a'];
            if(curr->isEnd) return ret ; 
        }
        return ret ;
    }
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string r,t;
        for(string i : dictionary){
            insert(i);
        }
        for(char i : sentence){
            if(i== ' ')
            {
                r+=search(t);
                r+=' ';
                t.clear();
            }else{
                t.push_back(i);
            }
        }
        r+=search(t);
        return r ;
    }
};
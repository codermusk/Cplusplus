class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map<char,int> letterFreq , scoreValues ; 
        int n = words.size() ; 
        int maxScore = 0 ; 
        for(auto it : letters) letterFreq[it]++ ; 
        for(int i = 0 ; i<26 ; i++)scoreValues[i+'a'] = score[i] ; 

        for(int mask = 0 ; mask < (1<<n); mask++){
            unordered_map<char,int> currFreq ; 
            for(int i =0 ; i < n ; i++){
                if((1<<i) & mask){
                    for(auto ch : words[i]) currFreq[ch]++ ;  
                }
            }

            bool val = true ; 
            for(auto [charec, freq] : currFreq){
                if(letterFreq[charec] < freq){
                    val = false ; 
                    break ;
                }
            }
            if(val){
                int currScore = 0 ;
                for(auto [charac, freq] : currFreq){
                    currScore += freq * scoreValues[charac] ; 
                }
                maxScore = max(maxScore , currScore);
            }
        }
        return maxScore ; 
    }
};

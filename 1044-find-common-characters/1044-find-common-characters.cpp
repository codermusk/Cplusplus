class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>overAllFreq(26,words.size());
        for(auto it : words){
            vector<int>currFreq(26,0);
            for(auto i : it)currFreq[i-'a']+=1;
            for(char i = 'a' ; i <= 'z' ; i++){
                overAllFreq[i - 'a'] = min(currFreq[i-'a'], overAllFreq[i-'a']);
            }
        }
        vector<string> ans ;
        for(char i = 'a'; i<='z'; i++){
            while(overAllFreq[i-'a']--){
                ans.push_back(string(1,i));
            }
        }
        return ans ;
    }
};
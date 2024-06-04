class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> mp ; 
        for(auto it : s){
            mp[it]+=1; 
        }

        int oddCount = 0 ; 
        for(auto it = mp.begin() ; it!=mp.end() ; it++){
            cout << it->second << " " ; 
            if(it->second %2 !=0){
                oddCount++;
            }
        }
        return s.size() - oddCount + (oddCount==0 ? 0 : 1) ;
    }
};
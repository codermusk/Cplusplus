class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copy(heights.begin() , heights.end());
        sort(copy.begin(), copy.end());
        int ans = 0 ; 
        for(int i = 0 ; i < heights.size(); i++){
            if(copy[i]!=heights[i]) ans++;
        } 
        return ans ;
    }
};
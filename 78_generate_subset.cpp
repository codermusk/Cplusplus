class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans ;
        ans.push_back({}); 
        for(auto it : nums){
            int size = ans.size() ; 
            for(int i = 0 ; i < size ; ++i){
                vector<int> temp = ans[i] ; 
                temp.push_back(it);
                ans.push_back(temp);
            }
        }
        return ans ; 
    }
};

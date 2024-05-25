class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> sol ;
        map<int , int> colormap , ansmap ;
        for(auto it : queries){
            int x = it[0] ; 
            int y = it[1] ; 
            if(colormap.contains(x)){
                ansmap[colormap[x]]--;
                if(ansmap[colormap[x]]==0){
                    ansmap.erase(colormap[x]);
                }
            }
            ansmap[y]++;
            colormap[x] = y ;
            sol.push_back(ansmap.size());
        }
        return sol ;
    }
    
};

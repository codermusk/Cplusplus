class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> sol ;
        unordered_map<int,int> mp;
        int count = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(x==nums[i]) {
                count++;
                mp[count] = i ;
            }
        }
        
        for(auto it : queries){
            if(mp.find(it)!=mp.end()){
                sol.push_back(mp[it]); 
            }else{
                sol.push_back(-1);
            }
        }
        return sol ;
    }
};

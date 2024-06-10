class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> sweep(2051,0);
        for(auto it : logs){
            sweep[it[0]]+=1;
            sweep[it[1]]-=1;
        }
        for(int i = 1 ; i < 2051 ; i++){
            sweep[i]+=sweep[i-1];
        }

        int check = INT_MIN , ans = 0 ; 
        for(int i = 0 ; i < 2051 ; i++){
            if(check < sweep[i]) check = sweep[i] , ans = i ;
        }
        return ans ; 

    }
};
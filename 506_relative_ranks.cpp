class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq ;
        for(int i = 0 ; i<score.size() ; i++){
            pq.push({score[i], i}); 
        }
        vector<string> sol(score.size()) ; 
        int place = 1 ;
        while(!pq.empty()){
            int originalIndex = pq.top().second ; 
            pq.pop() ;
            if(place==1){
                sol[originalIndex] = "Gold Medal" ; 
            }else if(place==2){
                sol[originalIndex] = "Silver Medal";
            } else if(place == 3){
                sol[originalIndex] = "Bronze Medal";
            }else{
                sol[originalIndex] = to_string(place); 
            }

            place++ ; 

        }
        return sol ; 

    }
};

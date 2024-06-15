class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size() ; 
        vector<pair<int , int >> vec ; 
        for(int i = 0 ; i<profits.size() ; i++){
            vec.emplace_back( capital[i], profits[i]);
        }
        sort(vec.begin() , vec.end()) ; 
        priority_queue<int> pq ;
        int it = 0 ;
        for(int i = 0 ; i<k ; i++){
            while(it<n && vec[it].first<=w){
                pq.push(vec[it++].second) ; 
            }
             if(pq.empty()) 
            break ;
            w+=pq.top() ;
            pq.pop() ; 
        }
        return  w; 
        
    }
};
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> mp ; 
        for(auto it : hand) mp[it]++; 
        if(hand.size() % groupSize !=0) return false ; 
        for(auto [el , freq] : mp){
            if(freq==0) continue ;
            while(freq--){
                for(int j = el ; j < el + groupSize ; j++){
                    if(mp[j]==0) return false ;
                    mp[j]--;
                }
            }
        }
        return true ;
    }
};
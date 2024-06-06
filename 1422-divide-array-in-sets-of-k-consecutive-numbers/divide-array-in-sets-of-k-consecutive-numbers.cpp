class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int groupSize) {
       map<int,int> mp ; 
        for(auto it : nums) mp[it]++; 
        if(nums.size() % groupSize !=0) return false ; 
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
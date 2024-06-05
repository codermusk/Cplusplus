class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin() , meetings.end()) ; 
        int prev = meetings[0][1] , ans = meetings[0][0] -1 ;
        for(int i = 1 ; i < meetings.size() ; i++){
            int a = meetings[i][0] , b = meetings[i][1]; 
            if(a > prev) ans+= a - prev - 1 ;
            prev = max(prev, b);
        }
        ans+=days-prev;
        return ans ;
    }
};
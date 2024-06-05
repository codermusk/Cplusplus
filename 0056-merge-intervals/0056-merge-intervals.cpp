class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 1 ) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans ; 
        int a = intervals[0][0] , b =intervals[0][1] ;
        for(int i = 1 ; i < intervals.size() ; i++){
            if(intervals[i][0] > b){
                ans.push_back({a,b});
                a = intervals[i][0];
                b = intervals[i][1];
            }else{
                b = max(intervals[i][1] , b);
            }
        }
        ans.push_back({a,b});
        return ans ;

    }
};
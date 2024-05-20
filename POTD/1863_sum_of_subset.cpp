class Solution {
public:
    vector<int> ans ; 
    void backTrack(vector<int> nums, int index , vector<int> itr){
        int val = 0 ;
        if(itr.size() == 0) val = 0 ; 
        else{
            val = itr[0] ;
        for(int i = 1; i < itr.size() ; i++){
            cout << itr[i] << " " ;
            val= (val ^ itr[i]) ; 
            cout << val ; 
        }
        }
        cout << endl ; 
        ans.push_back(val) ; 

        for(int i = index ; i < nums.size() ; i++){
            itr.push_back(nums[i]) ; 
            backTrack(nums , i+1 , itr) ; 
            itr.pop_back() ;
        }
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> curr ; 
        backTrack(nums , 0, curr ); 
        int orAns = 0 ; 
        for(int i : ans) orAns+=i ; 
        return orAns ; 
    }

};

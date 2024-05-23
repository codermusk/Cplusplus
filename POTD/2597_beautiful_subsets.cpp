class Solution {
public:
    void backTrack(int k , vector<int> &nums, unordered_map<int,int> &mp , int &ans, int index){
        if(index == nums.size()) ans++ ; 
        else{
            if(!mp[nums[index]-k] && !mp[nums[index]+k]){
                mp[nums[index]]++ ; 
                backTrack(k,nums,mp,ans,index+1);
                mp[nums[index]]--;
            }
            backTrack(k,nums,mp,ans,index+1);
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        int ans = 0 ; 
        unordered_map<int,int> mp ; 
        backTrack(k,nums,mp,ans,0);
        return ans -1;
    }
};

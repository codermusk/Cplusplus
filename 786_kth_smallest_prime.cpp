class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,pair<int,int>>, vector<pair<double, pair<int,int>>>, greater<>> mHeap ; 
        int size = arr.size() ; 
        for(int i = 0 ; i < size ; i++){
            for(int j = i+1 ; j<size ; j++){
                mHeap.push({(double)arr[i]/arr[j] , {arr[i],arr[j]}}); 
            }
        } 
        pair<int,int> result ; 
        for(int i = 0 ; i<k ; i++){
            result = mHeap.top().second ; mHeap.pop();
        }
        return { result.first , result.second } ; 
    }
};

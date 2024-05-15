class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        auto cmp = [] (pair<int,int> a , pair<int,int>b)->bool{
            return a.first*b.second > a.second * b.first ; 
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> mHeap(cmp) ; 
        int size = arr.size() ; 
        for(int i = 0 ; i < size ; i++){
            for(int j = i+1 ; j<size ; j++){
                mHeap.push({arr[i],arr[j]}); 
            }
        } 
        pair<int,int> result ; 
        for(int i = 0 ; i<k ; i++){
            result = mHeap.top() ; mHeap.pop();
        }
        return { result.first , result.second } ; 
    }
};

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> pos ; 
        for(int i = 0 ; i < arr2.size() ; i++){
            pos[arr2[i]] = i ;
        }
        auto cmp = [&](int a , int b)-> bool { 
            if(pos.find(a)==pos.end() && pos.find(b)==pos.end()){
                 return a < b ;
            }else if(pos.find(a)==pos.end()){
                return false;
            }else if(pos.find(b) == pos.end()){
                return true;
            }else{
                return pos[a] < pos[b] ;
            }
        };
        sort(arr1.begin() , arr1.end(), cmp);
        return arr1 ;  
    }
};

// Problem Link -> https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/submissions/
// This is brute force sol

#include<iostream>
using std namespace ; 

  int kthSmallest(vector<vector<int>>& matrix, int k) {
    vector<int> vec ; 
    for(int i = 0 ; i<matrix.size() ; i++){
        for(int j = 0 ; j<matrix.size() ; j++){
            vec.push_back(matrix[i][j]);
        }
    }

    sort(vec.begin() , vec.end()); 
    return vec[k-1];
        
    }




int main(){
kthSmallest(int &matrix, int k) ; 
}

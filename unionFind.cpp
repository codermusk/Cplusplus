#include<iostream>
#include<vector>
using namespace std ; 



class UF { 
private:
  vector<int> id ;
public:

UF(int size){
id.resize(size) ; 
for(int i = 0 ; i< size ; i++){
    id[i] = i  ; 
  }

 bool isConnected(int p , int q){
    return id[p] == id[q] ; 
  }

    void union(int p, int q){
      int val = id[p];
      int val2 = id[q];
      for(int i = 0 ; i < id.size() ; i++){
        if(id[i]==val) id[i] = val2 ; 
      }
    }
  }
};

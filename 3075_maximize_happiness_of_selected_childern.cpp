#include<iostream>
using namespace std ;
long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int> pq ; 
        for(int i : happiness){
            pq.push(i) ; 
        }
        int el = 0 ; 
        long long sum = 0 ; 
        while(!pq.empty() && el!=k){
            long long val = pq.top() ; 
            pq.pop() ; 
            if((val - el) >= 0 && el!=0) val-=el;
            else if (val-el < 0) val = 0 ;
            cout << val << " ";
            sum = sum + val ; 
            el++ ;
        }
        return sum ; 
    }
int main(){
  // solution goes here
}

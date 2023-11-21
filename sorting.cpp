#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define vi vector<int>
#define ld long double
#define pb push_back 
#define REP(i,a,b) for(int i = a ; i < b ; i++)
#define all(c) (c).begin(), (c).end()

void bubblesort(){
   int size ; 
   cin>> size ; 
   vi a ; 
   REP(i,0,size){
      int ele ; 
      cin>>ele ; 
      a.pb(ele);
   }

   REP(i, 0 , size){
      REP(j , 0 , size-i-1){
         if(a[j]>a[j+1]){
            swap(a[j], a[j+1]) ; 
         }
      }
   }
  cout << "And The sorted Arrays is \n" ;
   for(auto& it : a){
      cout<< it << " "; 
   }
    cout<< "\n**************************" ; 
}
int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout); 
   #endif 
   bubblesort(); 
}
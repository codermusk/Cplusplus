#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define vi vector<int>
#define ld long double
#define pb push_back 
#define REP(i,a,b) for(int i = a ; i < b ; i++)
#define all(c) (c).begin(), (c).end()

void solve(){
   int val ; 
   cin >> val ; 
   ll pal =  0, temp = val;
   while(val>0){
      int number = val%10 ;
      pal = number+pal*10;
      val/=10;
   }

   if(pal == temp) cout<< "It is a Palindrome";
   else cout << "It is not a Palindrome" ; 

}
int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout); 
   #endif 
   solve();
}
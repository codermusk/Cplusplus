#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define vi vector<int>
#define ld long double
#define pb push_back 
#define all(c) (c).begin(), (c).end()

void solve(){
	vi a ; 
	int size ; 
	cin>> size ; 
	for(int i = 0 ; i < size ; i++){
		int ele ;
		cin>> ele ;
		a.pb(ele); 
	}
	int sum = 1e-9 ;
	int best = 1e-9 ; 
	for(auto& it : a){
		sum = max(it , sum+it) ; 
		cout<< sum << " " ;
		best = max(best,sum);
	}
	cout<<best;

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
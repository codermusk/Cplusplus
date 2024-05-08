#include<bits/stdc++.h>
using namespace std ; 
int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	auto func = [](int a , int b)-> int{
		return a+b ; 
	};

	int ans = func(522,10) ; 

	cout<< ans ; 
}
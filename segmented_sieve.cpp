#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std ;

int n = 1000000 ; 
bool arr[n+1] ; 
void createSieve(){
	for(int i = 2 ; i<=n ; i++){
		arr[i] = true ; 
	}

	for(int i = 2 ; i*i<=n ; i++){
		if(arr[i]){
			for(int j = i*i ; j<= n ; j+=i){
				arr[i] = false ;
			}
		}
	}
}

vector<int> generatePrimes(int number){
	vector<int> ans ; 
	for(int i = 2 ; i<=number ; i++){
		if(arr[i]) ans.push_back(i);	
	}
	return ans ;
}
int main(){
	int lef  ; 
	int rig ; 
	cin >> lef >> rig ; 

	createSieve() ; 
	vector<int> primes = generatePrimes(sqrt(rig)) ; 
	int size = rig - lef ;
	int answer [size+1];
	for(int i = 0 ; i < size +1 ; i++){
		answer[i] = 1; 
	}
	for(auto & it : primes){
		int max_start = (l / it) * it ; 
		if(max_start < l) max_start+=it ; 
		int valueToStart = max(max_start, it*it) ; 
		for(int i = valueToStart ; i<= r ; i+=it){
			answer[i - lef] = 0 ; 
		}

	}


}
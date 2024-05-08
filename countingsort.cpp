#include<iostream>
using namespace std ; 

void countSort(int input[]){
	int size = sizeof(input)/sizeof(input[0]);
	int output[size] ; 

	int maxi ; 

	for(int i = 0 ; i < size ; i++){
		maxi = max(maxi, input[i]);
	}

	int countArr[maxi] = {0} ; 

	for(int i= 0 ; i<size ; i++){
		countArr[input[i]]++ ;
	}

	for(int i = 1; i <= maxi ; i++){
		countArr[i]+=countArr[i-1];
	}

	for(int i = 0 ; i< size ; i++){
		output[countArr[input[i]]-1] = input[i] ; 
		countArr[i]--;
	}
}

int main(){
	ios_base::sync_with_stdio(false) ; 
	cin.tie(0); 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); 
	freopen("output.txt","w",stdout);
	#endif

	int arr[] = {1,2,432,422,432,43252,123,1456,257543,2,32,1,231} ; 
	arr = countSort(arr) ;

	for(int i : arr) cout << i << " " ; 
}
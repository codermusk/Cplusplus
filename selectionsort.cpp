#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 




void selectionSort(int arr[] , int size){
	int min_idx	; 
	for(int i = 0 ; i < size-1 ; i++){
		min_idx = i ;
		for(int j = i+1 ; j< size ; j++){
			if(arr[min_idx] > arr[j]){
				min_idx = j ; 
			}
		}
		if(min_idx!=i) swap(arr[min_idx], arr[i]) ; 
	}
}


int main() {

	ios_base::sync_with_stdio(false) ; 
	cin.tie(0) ; 

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function Call 
    selectionSort(arr, n); 
    cout << "Sorted array: \n"; 
    for(int i : arr){
    	cout << i << " " ; 
    }

}
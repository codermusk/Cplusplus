#include<iostream>
#include <bits/stdc++.h>
using namespace std ; 


int main() { 
	ios_base::sync_with_stdio(false) ; 
	cin.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ; 
	freopen("output.txt", "w", stdout); 
	#endif

	int arr[] = {1,2,3,2,2,3,1,1,1,1,5,45,1,3,3,1,1,1,1,1} ;

	int votes = 0 , candidate = -1 ; 
	int size = sizeof(arr) / sizeof(arr[0]); 
	for(int i = 0 ; i < size ; i++){
		if(votes == 0){
			candidate = arr[i] ; 
			votes =1 ;
		}
		else {
            if (arr[i] == candidate)
                votes++;
            else
                votes--;
        }
	}

	// cout << candidate ; 
	int majEle = 0 ; 

	for(int i : arr){
		if(candidate == i) majEle++ ; 
	}
	// cout << majEle ; 

	int number = size / 2 ; 

	// cout << number ;
	
	cout << (majEle > number) ? candidate : -1 ; 
}

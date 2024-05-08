#include<iostream>
using namespace std ; 


void bubblesort(int arr[], int size){
	bool swapped ; 
	for(int i = 0 ; i<size ; i++){
		for(int j = 0 ; j < size - i - 1 ; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]) ; 
				swapped = true ;
			}
		}
		// this is used to break if no elements were been swapped in the inner loop since if it is not swapped then we dont need to continue further anymore so we are just breaking the loop here
		if(!swapped)
			break ; 
	}
}

// recursive bubble sort 

void recBubble(int arr[] , int size){
	if(n==1) return ;
	int count =  0 ;

	for(int j = 0 ; j<n-1 ; j++){
		if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]) ;
				count++ ; 
			}
	}

	if (count == 0) return ; 

	recBubble(arr, size-1) ; 

}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(0) ; 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w" , stdout); 
	#endif

	int arr[] = {2,3,4,4,345,34,24} ; 
	bubblesort(arr , sizeof(arr)/sizeof(arr[0])) ; 
	for(int i : arr){
		cout << i << " " ; 
	}
}
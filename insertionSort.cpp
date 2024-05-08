#include<iostream>

using namespace std ; 




void insertionSort(int arr[] , int size){
	int key, j;
	for(int i = 1 ; i< size ; i++){
		key = arr[i];
		j = i - 1 ; 

		while(j>=0 && key<arr[j]){
			arr[j+1] = arr[j] ;
			j = j -1 ; 
		} 
		arr[j+1] = key ; 
	}
}


int main(){
	ios_base::sync_with_stdio(false) ; 
	cin.tie(0) ; 

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r", stdin) ; 
	freopen("output.txt", "w", stdout); 
	#endif

	int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, N);

    for(int i : arr) cout<< i << " " ; 
 
    return 0;

}
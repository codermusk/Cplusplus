#include <bits/stdc++.h>
#include<vector>
using namespace std ; 

int partition(vector<int> &arr, int l, int h){
    int low = l ; 
    int high = h ;
    int pivot = arr[low] ; 
    while(low < high){
        while(arr[low]<= pivot && low <= h - 1){
            low++ ; 
        }
        while(arr[high]> pivot && high >= l+1){
            high -- ; 
        }

        if(low < high) swap(arr[low], arr[high]); 
    }

    swap(arr[low] , arr[high]); 
    return high ; 
}

void quicksort(vector<int> &arr, int l, int r){
    if(l < r){
        int par = partition(arr, l, r) ; 
        quicksort(arr,l, par-1);
        quicksort(arr, par+1,  r);
    }
}

vector<int> quickSort(vector<int> arr)
{
    quicksort(arr, 0 , arr.size()-1);
    return arr ; 
}

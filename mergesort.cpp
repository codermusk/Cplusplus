#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define vi vector<int>
#define ld long double
#define pb push_back 
#define REP(i,a,b) for(int i = a ; i < b ; i++)
#define all(c) (c).begin(), (c).end()




void merge(int arr[], int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}


void mergeSort(int arr[], int left , int right){
   int mid = left + (right - left) / 2 ; 
   if(left==right) return ; 

   mergeSort(arr, left, mid) ; 
   mergeSort(arr, mid+1 , right); 

   merge(arr, left , mid , right) ; 

}
int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout); 
   #endif 
   int arr[] = {1,2,3,4,5,6,7,8,324,235,32532};
   mergeSort(arr, 0 , (sizeof(arr)/sizeof(arr[0])) - 1 ); 

   for(int i : arr) cout << i << " " ; 

}
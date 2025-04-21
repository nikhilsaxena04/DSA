#include<iostream>
using namespace std;

// two pointers at low, high, we select a pivot then shift greater elements to right, smaller to left, and find pivot actual positiona and return it,
// recursively apply recursion to left and right halves of pivot
int f(int arr[], int low, int high){
  int pivot = arr[low]; //pivot is a value, don't pass it as index
  int i = low;
  int j = high;
  while(i<j){
    while(arr[i]<=pivot && i<high){ // stop when greater elem found
      i++;
    }
    while(arr[j]>arr[pivot] && j>low){ // stop when smaller elem found
      j--;
    }
    if(i<j) swap(arr[i], arr[j]);
  } 
  swap(arr[low], arr[j]); //low(index) = pivot(value)
  return j;
}

void quickSort(int arr[], int low, int high){
  if(low<high){
    int pivotIndex = f(arr, low, high); //returns correct index of pivot

    quickSort(arr, low, pivotIndex-1);
    quickSort(arr, pivotIndex+1, high);
  }
}

int main(){
  int arr[9] = {5, 4, 3, 2, 1, 0, 9, 8, 7};
  int n = 9; // size

  quickSort(arr, 0, n-1);
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
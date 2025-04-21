#include<iostream>
using namespace std;

//divide array using low, high, mid, mid+1 internally until low==high
//put two pointers, left(low) and right(mid+1) and push_back in a temp array
void merge(int arr[], int low, int mid, int high){
  int temp[100];
  int index=0;
  int left = low;
  int right = mid+1;

  while(left <= mid && right <= high){
    if (arr[left]<arr[right]){
      temp[index] = arr[left];
      index++;
      left++;
    } else {
      temp[index] = arr[right];
      index++;
      right++;
    }
  }

  while(left<=mid){
    temp[index] = arr[left];
    index++;
    left++;
  }
  while(right<=high){
    temp[index] = arr[right];
    index++;
    right++;
  }

  for (int i=low; i<=high; i++){
    arr[i] = temp[i-low];
  }
}

void mergeSort(int arr[], int low, int high){
  if(low == high) return;
  if(low < high){
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);
  }
}

int main(){
  int arr[9] = {5, 4, 3, 2, 1, 0, 9, 8, 7};
  int n = 9;
  mergeSort(arr, 0, 8);
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
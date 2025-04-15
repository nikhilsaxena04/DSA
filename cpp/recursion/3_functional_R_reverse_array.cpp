#include<bits/stdc++.h>
using namespace std;

//reverse an array [1,2,4,5.5], two pointer(l++, r--) or single pointer(i, n-i-1)
//one pointer
// void f(int i, int arr[], int n){
//   if(i>=n/2) return;
//   swap(arr[i], arr[n-i-1]);
//   f(i+1, arr, n);
// }

// int main() {
//   int n;
//   cout << "enter size of array:";
//   cin >> n;
//   int arr[n];
//   cout << "enter array elements" << endl;
//   for(int i=0; i<n; i++) cin >> arr[i];


//   f(0, arr, n);


//   for(int i=0; i<n; i++) cout << arr[i] << " ";
//   return 0;
// }


void f(int l, int r, int arr[]){
  if(l>=r) return;
  swap(arr[l], arr[r]);
  f(l+1, r-1 ,arr);
}

int main() {
  int l, r, n;
  cout << "enter size of array:";
  cin >> n;
  int arr[n];
  cout << "enter array elements:" << endl;
  for(int i=0; i<n; i++) cin >> arr[i];


  f(0, n-1, arr);

  
  for(int i=0; i<n; i++) cout << arr[i] << " ";
  return 0;
}
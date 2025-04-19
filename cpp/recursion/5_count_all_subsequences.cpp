#include<iostream>
#include<vector>
using namespace std;
 
// count all subsequences with a given sum
int f(int index, int s, int sum, int arr[], int n){
  if(index == n) {
    if(s == sum) return 1; //condition satisfied
    else return 0; //condition not satisfied
  }

  s += arr[index];
  
  //pick
  int l = f(index + 1, s, sum, arr, n);

  s -= arr[index]; // Backtrack

  // not pick
  int r = f(index + 1, s, sum, arr, n);

  return l + r;
}

int main(){
  int arr[] = {3, 1, 1, 2, 0};
  int n = 5;
  int sum = 2;

  cout << "total subsequences: " << f(0, 0, sum, arr, n);
}
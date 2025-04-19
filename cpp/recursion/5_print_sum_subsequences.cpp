#include<iostream>
#include<vector>
using namespace std;

void f(int index, vector<int> &ds, int s, int sum, int arr[], int n){
  if(index == n){
    if(s == sum){
      for(auto it : ds) cout << it << " ";
      cout << endl;
    }
    return;
  }

  // Take the current element
  ds.push_back(arr[index]); 
  s += arr[index];
  f(index + 1, ds, s, sum, arr, n); // Recursive call with take
  s -= arr[index]; // Backtrack
  ds.pop_back(); // Backtrack

  // Do not take the current element
  f(index + 1, ds, s, sum, arr, n); // Increment index here
}

int main(){
  int arr[] = {3, 1, 1, 2, 0};
  vector<int> ds;
  int n = 5;
  int sum = 2;

  f(0, ds, 0, sum, arr, n);
}
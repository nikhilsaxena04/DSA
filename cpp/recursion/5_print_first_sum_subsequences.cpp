#include<iostream>
#include<vector>
using namespace std;

bool f(int index, vector<int> &ds, int s, int sum, int arr[], int n){
  if(index == n){
    if(s == sum){
      for(auto it : ds) cout << it << " ";
      cout << endl;
      return true;
    }
    else return false;
  }

  ds.push_back(arr[index]); 
  s += arr[index];
  
  //pick
  if( f(index + 1, ds, s, sum, arr, n) == true ) return true;

  s -= arr[index]; // Backtrack
  ds.pop_back(); // Backtrack

  // not pick
  if( f(index + 1, ds, s, sum, arr, n) == true ) return true;

  return false; // If no subsequence found
}

int main(){
  int arr[] = {3, 1, 1, 2, 0};
  vector<int> ds;
  int n = 5;
  int sum = 2;

  f(0, ds, 0, sum, arr, n);
}
#include<iostream>
#include<vector>
using namespace std;

/*
  print all subsequences(contigous subsequences, which follows the order)
  hint: take or leave
    imput: 
      arr[3, 1, 2]
    output: 
      []
      [3] 
      [1] 
      [2] 
      [3, 1] 
      [1, 2] 
      [3, 2] 
      [3, 1, 2]
  */

void f(int index, vector<int> &ds, int arr[] ,int n)
{
  if (index == n){
    for(auto it:ds){
      cout << it << " ";
    }
    if(ds.size() == 0){ //ds.empty()
      cout << "{}";
    }
    cout << endl;
    return;
  }
  
  f(index+1, ds, arr, n); //exclude current element,

  ds.push_back(arr[index]); //include current element
  f(index+1, ds, arr, n);
  ds.pop_back(); //backtrack to remove last element
}

int main() {
  int arr[] = {3, 1, 2};
  int n=3;
  vector<int> ds;

  f(0, ds, arr, n);

  return 0;
}
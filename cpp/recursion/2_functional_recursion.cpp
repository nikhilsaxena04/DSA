#include<iostream>
using namespace std;
// find sum upto n
int SUM(int n){
  if (n<1) return 0;
    return n + SUM(n-1);
}

int main(){
  int n;
  cout << "Enter n: ";
  cin >> n;

  cout << SUM(n) <<endl;
  
  return 0; 
}
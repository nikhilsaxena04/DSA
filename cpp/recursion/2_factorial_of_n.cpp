#include<iostream>
using namespace std;

//find factorial of n
int fact(int n){
  if (n<1) return 0;
  if (n==1) return 1;
  
  return n * fact(n-1);
}


int main(){
  int n;
  cout << "Enter n: ";
  cin >> n;

  cout << fact(n) <<endl;
  
  return 0; 
}
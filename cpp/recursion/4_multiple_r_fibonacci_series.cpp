#include<iostream>
using namespace std;

//write a program to print fibonacci series upto n
// 0 1 1 2 3 5 8 13 21 34 ....
//every no. is sum of previous two

int f(int n){
  if (n<=1) return n; //0 for 0, 1 for 1, base case

  int last = f(n-1); //completes first
  int slast = f(n-2);
  return last + slast;
}
//recursive tree is formed

int main() {

  cout << f(7);

  return 0;
}
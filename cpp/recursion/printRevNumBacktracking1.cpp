//print n to 1 using backtracking
#include <iostream>
using namespace std;

void print(int i, int n) {
  if (i > n) return;
  print(i+1, n); //backtrack first till base condition then print n, n-1, n-2...3,2,1
  cout << i << endl;
}

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  print(1, n);
  return 0;  
}
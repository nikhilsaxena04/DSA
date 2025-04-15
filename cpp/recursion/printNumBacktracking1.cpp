//print 1 to n using backtracking
#include <iostream>
using namespace std;

void print(int i, int n) {
  if (i < 1) return;
  print(i-1, n); //backtrack first till base condition then print 1,2,3...n froms (n, n-1, n-2...1)
  cout << i << endl;
}

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  print(n, n);
  return 0;  
}
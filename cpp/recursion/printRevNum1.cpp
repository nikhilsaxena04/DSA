//print n no. in reverse order
#include <iostream>
using namespace std;

void print(int n) {
  if (n == 0) return;
  cout << n << endl;
  print(n-1);
}

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  print(n);
  return 0;  
}
//print name 5 times
#include <iostream>
using namespace std;

void print(int i, int n) {
  if (i > n) {
    return;
  }
  cout << "raj" << endl;
  print(i + 1, n);
}

int main() {
  int n;
  cout << "Enter the number of times to print the name: " << endl;
  cin >> n;
  print(1, n);
  return 0;  
}
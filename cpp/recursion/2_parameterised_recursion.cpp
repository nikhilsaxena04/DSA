#include<iostream>
using namespace std;
// find sum upto n
void SUM(int i, int sum){
  if (i<1) {
    cout << sum << endl;
    return;
  };
  SUM(i-1, sum+i);
}

int main(){
  int n;
  int sum = 0;
  cout << "Enter n: ";
  cin >> n;

  SUM(n, sum);
  
  return 0; 
}
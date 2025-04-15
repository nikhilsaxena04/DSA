#include<iostream>
using namespace std;


void print(int cnt){
  if (cnt == 4) {
    return;
  }
  cout << 1 << endl;
  cout << cnt <<endl;
  print(cnt + 1);
}

int main(){
  print(0);
}
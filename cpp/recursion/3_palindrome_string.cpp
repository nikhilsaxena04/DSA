#include<iostream>
using namespace std;

//check if a string is palindrome or not

bool f(int i, string &s) {
  if (i >= s.length()/2) return true;   // base case

  //if (s[i] != s[s.length() - i - 1]) return false; //case sensitive
  if (tolower(s[i]) != tolower(s[s.length() - i - 1])) return false;
  return f(i+1, s);
}

int main(){
  string s = "madam";
  cout << f(0, s);
}
#include<iostream>
using namespace std;
//right angled triangles
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++ ){
            cout << "* ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++ ){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print6(int n){//pyramid
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //space
         for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void print7(int n){//inverted pyramid
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        //space
         for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n){
    print6(n);
    print7(n);
}
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
void print9(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print9(n);
    return 0;
}
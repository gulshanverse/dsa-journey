#include<bits/stdc++.h>
using namespace std;

void pattern20(int n){
        // Upper Half
    for(int i = 1; i <= n; i++) {
        // Left Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }
        // Right Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
    }
    cout << endl;
    }
    // Lower Half
    for(int i = n-1; i >= 1; i--) {
        // Left Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <= 2*(n-i); j++){
           cout << " ";
        }
        // Right Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
    cout << endl;
    }
}
int main(){
    int t,n;
    cout<<"Enter the no of cases: ";
    cin>>t;
    cout<<"Enter n: ";
    cin>>n;
    pattern20(n);
    return 0;
}
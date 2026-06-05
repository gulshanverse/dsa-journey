/*
1                1
12              21
123            321
1234          4321
12345        54321
123456      654321
1234567    7654321
12345678  87654321
123456789987654321 
*/
//it will work till n = 9 
#include<bits/stdc++.h>
using namespace std;
void pattern12(int n){
    int i,j;
    for(i = 1;i<=n;i++){
        //numbers
        for(j=1;j<=i;j++){
            cout<<j;
        }
        //space 
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //numbers
        for(j = i ;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int i,t,n;
    cout<<"Enter no of cases: ";
    cin>>t;
    for(i=0;i<t;i++){
        cout<<"Enter n: ";
        cin>>n;
        pattern12(n);
    }
    return 0;
}

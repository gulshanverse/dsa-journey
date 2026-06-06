/*
********** --0 space 
****  **** --2 space
***    *** --4 space
**      ** --6 space
*        * --8 space
*        *
**      **
***    ***
****  ****
**********
*/
#include<bits/stdc++.h>
using namespace std;
void pattern19(int n){
    int i,j;
    for(i =0;i<n;i++){
        //for stars
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        //for spaces
        for(j=0;j<2*i;j++){
            cout<<" ";
        }
        //for stars
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    for(i = n;i<2*n;i++){
        //for stars
        for(j=0;j<i-(n-1);j++){
            cout<<"*";
        }
        //for spaces
        for(j=0;j<2*(2*n-i-1);j++){
            cout<<" ";
        }
        //for stars
        for(j=0;j<i-(n-1);j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    int t,n;
    cout<<"Enter no of cases: ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout<<"Enter n: ";
        cin>>n;
        pattern19(n);
    }
    return 0;
}
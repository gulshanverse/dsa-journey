/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
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
    return 0;
}


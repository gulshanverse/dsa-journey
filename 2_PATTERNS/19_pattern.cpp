/*
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F ...
*/
#include<bits/stdc++.h>
using namespace std;
void pattern16(int n){
    int i,j;
    for(i = 0;i<n;i++){
        char ch ='A'+ i;
        for(j=0;j<=i;j++){
            cout<<ch<<" ";
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
        pattern16(n);
    }
    return 0;
}
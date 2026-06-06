/*
E 
D E 
C D E 
B C D E 
A B C D E ....
*/
#include<bits/stdc++.h>
using namespace std;
void pattern18(int n){
    int i,j;
    char last;
    cout<<"Enter starting character: ";
    cin>>last;
    n = last -'A'+1;
    for(i = 0;i<n;i++){
        for(char ch = last-i;ch<=last;ch++){
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
        pattern18(n);
    }
    return 0;
}
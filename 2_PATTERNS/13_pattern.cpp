/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1 ....
*/
#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    int i,j,start = 1;
    for(i = 0;i<n;i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(j=0;j<=i;j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"Enter no of cases: ";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern1(n);
    }
    return 0;
}

/*SHORT FORM CODE
#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n,i,j,start = 1;
    cin>>n;
    for(i = 0;i<n;i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(j=0;j<=i;j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
    return 0;
}
*/
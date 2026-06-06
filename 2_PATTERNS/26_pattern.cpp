#include<bits/stdc++.h>
using namespace std;
void pattern21(int n){
    int i,j;
    for(i = 0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min((min(top,down)),min(left,right)));
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
        pattern21(n);
    }
    return 0;
}
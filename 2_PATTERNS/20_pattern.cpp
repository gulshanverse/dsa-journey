/*
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA ...
*/
#include<bits/stdc++.h>
using namespace std;
void pattern17(int n){
    int i,j;
    for(i = 0;i<n;i++){
        //for space
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //for character
        char ch = 'A';
        for(j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<((2*i+1)/2)) ch++;
            else ch--;
        }
        for(j = 0;j<n-i-1;j++){
            cout<<" ";
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
        pattern17(n);
    }
    return 0;
}
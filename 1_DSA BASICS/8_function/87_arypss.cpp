#include<bits/stdc++.h>
using namespace std;
//pass by reference
//array always pass by reference
void doSomething(int arr[],int n){
    arr[0] +=100;
    cout<<"Value inside function: "<<arr[0]<<endl;
}
int main(){
    int n =5;
    int arr[5];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    doSomething(arr,n);
    cout<<"Value inside main: "<<arr[0]<<endl;
    return 0;
}
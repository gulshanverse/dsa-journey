#include<bits/stdc++.h>
using namespace std;
int max(int n1,int n2){
    if(n1>n2){
    return n1;}
    else{
    return n2;}
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Max of numbers: "<<max(num1,num2)<<endl;
    return 0;
}
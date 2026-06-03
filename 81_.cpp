#include<bits/stdc++.h>
using namespace std;
int sum(int n1,int n2){
    int n3=n2+n1;
    return n3;
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Sum of numbers: "<<sum(num1,num2)<<endl;
    return 0;
}
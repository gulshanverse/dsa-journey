#include<bits/stdc++.h>
using namespace std;
//pass by value
void doSomething(int &num){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num +=10;
    cout<<num<<endl;
}
int main(){
    int num1;
    cout<<"Enter numbers: ";
    cin>>num1;
    doSomething(num1);
    cout<<num1<<endl;
    return 0;
}
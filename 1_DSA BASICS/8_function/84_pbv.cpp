#include<bits/stdc++.h>
using namespace std;
//pass by value
void doSomething(string s){
    s[0] = 'M';
    cout<<s<<endl;
}
int main(){
    string s1;
    cout<<"Enter the name: ";
    cin>>s1;
    cout<<"Upadated Name: ";
    doSomething(s1);
    return 0;
}
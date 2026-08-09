#include<bits/stdc++.h>
using namespace std;
//pass by reference
void doSomething(string &s){
    s[0] = 'M';
    cout<<s<<endl;
}
int main(){
    string s1;
    cout<<"Enter the name: ";
    cin>>s1;
    cout<<"Upadated Name: ";
    doSomething(s1);
    cout<<s1<<endl;
    return 0;
}
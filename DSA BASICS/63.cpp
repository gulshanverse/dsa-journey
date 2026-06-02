#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin >> s;
    int len = s.size();
    //dispalay last letter of the word
    cout<<s[len-1]<<endl;
    //change First letter of the string
    s[0]= 'F';
    cout<<s;
    return 0;
}
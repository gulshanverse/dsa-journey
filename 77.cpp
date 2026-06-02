#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for (j=11;j<=21;j++){
            cout<<left<<setw(12);
            cout<<((to_string(j)) + "x" + (to_string(i)) + "=" +(to_string(i*j)));
        }
        cout<<endl;
    }
    return 0;
}
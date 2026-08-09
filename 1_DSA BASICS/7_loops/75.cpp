#include<iostream>
using namespace std;
int main(){
    int i,j;
    //number table
    for (i = 1;i<=10;i++){
        for (j = 11;j<=15;j++){
            cout<<j<<"x"<<i<<"="<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
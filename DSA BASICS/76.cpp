#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    //number table
    for (i = 1;i<11;i++){
        for (j = 1;j<11;j++){
            for(k = 1;k<11;k++){
            cout<<i*j*k<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
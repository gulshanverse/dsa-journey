// /*
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 ....
// */
// //MY METHOD
// #include<bits/stdc++.h>
// using namespace std;
// void pattern13(int n){
//     int i,j,start=1;
//     for(i = 1;i<=n;i++){
//         for(j=start;j<start+i;j++){
//             cout<<j<<" ";
//         }
//         start = start+i;
//         cout<<endl;
//     }
    
// }
// int main(){
//     int i,t,n;
//     cout<<"Enter no of cases: ";
//     cin>>t;
//     for(i=0;i<t;i++){
//         cout<<"Enter n: ";
//         cin>>n;
//         pattern13(n);
//     }
//     return 0;
// }

//ANOTHER METHOD
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
void pattern13(int n){
    int i,j,num=1;
    for(i = 1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<setw(10)<<num;
            num++;
        }
        cout<<endl;
    }
    
}
int main(){
    int i,t,n;
    cout<<"Enter no of cases: ";
    cin>>t;
    for(i=0;i<t;i++){
        cout<<"Enter n: ";
        cin>>n;
        pattern13(n);
    }
    return 0;
}
    
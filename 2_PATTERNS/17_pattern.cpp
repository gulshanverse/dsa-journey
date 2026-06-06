/*
A
A B
A B C
A B C D
A B C D E ...
*/
// #include<bits/stdc++.h>
// using namespace std;
// void pattern14(int n){
//     int i,j;
//     char A[j] = {'A','B','C','D','E','F','G','H'};
//     for(i = 0;i<n;i++){
//         for(j=0;j<i;j++){
//             cout<<A[j];
//         }
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
//         pattern14(n);
//     }
//     return 0;
// }

//ANOTHER METHOD

#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    int i,j;
    for(i = 0;i<n;i++){
        for(char ch ='A';ch <='A'+ i;ch++){
            cout<<ch<<" ";
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
        pattern14(n);
    }
    return 0;
}

/* Remember It;
'0' = 48
'A' = 65
'Z' = 90
'a' = 97
'z' = 122
' ' = 32
'\n' = 10
*/

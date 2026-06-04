/*
Nested loops:nested loops
1.for the outer loop count the number of lines
2.for the inner loops focus on the column and connnect
them somehow to the rows
3.whetever you printing, print them inside the inner loop
4.Observe the  symmetry(optional)
Patter:
****
****
****
**** ...
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
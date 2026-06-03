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
****


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
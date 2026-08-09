#include<bits/stdc++.h>
using namespace std;
int main(){
int N;
//TC = N^2
for(int i=0;i<N;i++){
    for(int j =0;j<=i;j++){ 
    //block of code
    }
}
return 0;
}
/*
i =0,j ={0}
i =1,j ={0,1}
i =2,j ={0,1,2}
i =3,j ={0,1,2,3}
i =4,j ={0,1,2,3,4}
TC = n(n^2+1)/2 ~~~ n^2
*/

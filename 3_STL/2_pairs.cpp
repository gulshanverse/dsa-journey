//containes--(1)Pairs
#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p = {7,4};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,float>> q = {5,{8,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int,int> arr[] ={{1,3},{4,2},{6,8},{9,5}};
    cout<<arr[0].first<<endl;
    cout<<arr[3].second;
}
int main(){
    explainPair();
    return 0;
}
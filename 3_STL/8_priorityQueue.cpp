#include<bits/stdc++.h>
using namespace std;
void expalinPQ(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(6);
    pq.push(7);
    pq.emplace(8);

    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

}
int main(){
    expalinPQ();
    return 0;
}
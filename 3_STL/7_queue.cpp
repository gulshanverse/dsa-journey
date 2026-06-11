#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    queue<int> q;
    q.push(2); // {2}
    q.push(4); // {2,4}
    q.emplace(6); //{2,4,6}
    q.back() +=5; // {2,4,11}

    cout<<q.back()<<endl; // 11

    cout<<q.front()<<endl; // 2
    //  Q is {2,4,9}
    q.pop(); // {4,9}

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    //size empaty swap same as stack

}
int main(){
    explainQueue();
    return 0;
}
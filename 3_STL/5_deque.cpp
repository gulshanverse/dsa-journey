#include<bits/stdc++.h>
using namespace std;
void explainDeque(){
deque<int> dq ;
dq.push_back(1); //{1}
dq.emplace_back(2);//{1,2}
dq.push_front(3); //{1,2,3}
dq.emplace_front(4);//{1,2,3,4}

dq.pop_back(); // (1,2,3)
dq.pop_front(); //(2,3)

deque<int> dq1 ={1,3,5};
dq.back();
dq.front();

}
int main(){
    void explainDeque();
    return 0;
}
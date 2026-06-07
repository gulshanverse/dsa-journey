#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*
//vector is dynamic array
1.Creating vector
1.0 empty vector
vector<int> v; //empty vector
1.1 with size
vector<int> v(5); // 0 0 0 0 0
1.2 with size and vallue
vector<int> v(5,10) // 10 10 10 10 10
1.3 with initializer list 
vector<int> v = // (10,20,25,30,35,40}
1.4 Copy Constructor
vector<int> v1={1,2,3};
vector<int> v2(v1);

Very very important :
vector<int> v(5); // 0 0 0 0 0
vector<int> v{5}; // 5
vector<int> v(5,6); // 6 6 6 6 6 6
vector<int> v{6,5,7}; // 6 5 7

2. Important Functions
2.1 push_back(): to add the elements at the end
vector<int> v;
v.push_back(10); // 10
v.push_back(20); // 10 20
v.push_back(30); // 10 20 30

2.2 pop_back(): remove last element
v -- 10 20 30
v.pop_back(); //10,20
v.pop_back(); //10

2.3 size(): Returns numbers of elements
vector<int> v; //10 20 30 40
v.size();// 4


2.4 Access elements
vector<int> v={29,18,17,182,27};
1.Using index
cout<< v[0]; //29   
2. Using at()
cout<< v.at(4); //27

cout<<v[100]; Undefined behavior 
cout<<at(100);

2.5 front() and back()
vector<int> v ={36,37,39,73,84}
cout<< v.front(); //36
cout<< v.back(); //84

2.5 empty()
vector<int> v ={36,37,39,73,84}
if(v.empty()): returns true or false

if(v.empty())
    cout<<"Empty";
else
    cout<<"Not Empty"; //False

3.Traversing a Vector
Method 1: For Loop
    for(int i =0; i<v.size();i++){
        cout<<v[i];
    }
Method 2: Range Based Loop
    for(int x: v){
        cout<<v[i]<<" ;"
    }
Methos 3: Iterator
for(auto it=begin(); it!=v.end();it++){
    cout<<*it<<" ";
}

4.begin() and end()
v.begin(); //points to first element
v.end(); // points just after last elements
v<vector> v = {100,23,49,56}
cout<<*v.begin();; //100
cout<<*v.end(); //56

5.Soting Vectors
sort(v.begin(),v.end());

vector<int> v = {4,5,2,6,0}
sort(v.begin(),v.end()); // 0 2 4 5 6

6.Reverse Vector
reverse(v.begin(),v.end()) // 0 6 2 5 4

7.clear(): Removes all the elements

v.clear(); //empty vector

8.Inserts Elements:insert element at the position as per need
v.insert(v.begin()+1,15) //insert(position,elements)

vector<int> v={10,20,30};
v.insert(v.begin()+1,15); //{10,15,20,30}

9.Erase elements at the specific position
vector<int> v = {29,45,87,98,65}
v.erase(v.begin()+2)  // {29,45,98,65}






*/
// void explainVector(){
//     //vector 1
//     vector<int> v1;
//     v1.push_back(1);
//     v1.emplace_back(2);
//     //vector 2
//     vector<pair<int,int>> v2;
//     v2.push_back({2,5});
//     v2.emplace_back(2,4);
//     //vector 3
//     vector<int> v3(5,100);
//     //vector 4
//     vector<float> v4(5);
//     //vector 5
//     vector<int> v5(5,20);
//     //vector 6 copy of vector 5
//     vector<int> v6(v5);
// }

// void explainVector1(){
//     //iterator
//     vector<int> v(5,25);
//     vector<int>::iterator it = v.begin();
//     it++;
//     cout<<*(it)<<" ";

//     it = it + 2;
//     cout<<*(it)<<" ";

//     vector<int>::iterator it = v.end();

//     vector<int>::reverse_iterator it1 = v.rend();

//     vector<int>::reverse_iterator it2 = v.rbegin();
//     /*
//     a[5]= S {5,6,7,3,4} E   
//     begin-- 5
//     end -- E
//     rbegin -- 4
//     rend -- S

//     */

//     //accesing element of the array 
//     cout<<v[0];
//     cout<<v.at(0);
//     cout<<v.back()<<" ";
//     for(vector<int>::iterator it = v.begin();it !=v.end(); it++){
//         cout<<*(it)<<" ";
//     }
//     for(auto it = v.begin();it !=v.end();it++){
//         cout<<*(it)<<" ";
//     }
//     for (auto it:v){
//         cout<<it<<" ";
//     }
//     // deleting elements of te vector

//     v.erase(v.begin()+1);
//     //v.erase(start,end)
//     //{10,20,30,40,50}
//     v.erase(v.begin()+2,v.begin()+4);//{10,20,50}


//     //Insertion.function
//     vector<int> v(2,100); //{100,100}
//     v.insert(v.begin(),300); //{300,100,100}
//     v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

//     vector<int> copy(2,50);//{50,50}
//     v.insert(v.begin(),copy.begin(),copy.end());{}

//     //{10,20,30,40}
//     cout<<v.size(); //4

//     //{25,15,35,60}
//     v.pop_back();

//     // v1 -> {10,15}
//     // v2 -> {14,18}
//     vector<int> v1 = {10,15};
//     vector<int> v2 = {25,50,75};
//     v1.swap(v2);

// }

// int main(){
//     explainVector();
//     explainVector1();
//     return 0;
// }
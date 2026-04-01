#include<bits/stdc++.h>
using namespace std;


// using vector to implement stack
// class Stack{
//     vector<int> v;

//     public:
//     void push(int val){
//         v.push_back(val);
//     }
//     void pop(){
//         v.pop_back();
//     }
//     int top(){
//         return v.back();
//         // or
//         return v[v.size()-1];
//     }
//     bool empty(){
//         return v.size() == 0;
//     }
// };
// int main(){
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     while(!s.empty()){

//         cout << s.top() << endl; // 3
//         s.pop();
//     }
//     cout<<endl;
// return 0;
// }


// using list to implement stack

// class Stack{
//     list<int> v;

//     public:
//     void push(int val){
//         v.push_front(val);
//     }
//     void pop(){
//         v.pop_front();
//     }
//     int top(){
//         return v.front();
//     }
//     bool empty(){
//         return v.size() == 0;
//     }
// };
// int main(){
//     Stack s;
//     s.push(11);
//     s.push(22);
//     s.push(33);
//     while(!s.empty()){

//         cout << s.top() << " "; // 33
//         s.pop();
//     }
//     cout<<endl;
// return 0;
// }



//using stack
int main(){
    stack<int> s;
    s.push(111);
    s.push(222);
    s.push(333);
    while(!s.empty()){

        cout << s.top() << " "; // 333
        s.pop();
    }
    cout<<endl;
return 0;
}
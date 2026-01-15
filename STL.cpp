#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <utility>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main(){

    //2. LIST------------->

    // list<int> l;   //created a list

    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(4);
    
    // for(int val : l){
    //     cout<< val <<" ";
    // }
    // cout<<endl;
    // l.pop_back();  //pop from the last
    // l.pop_front();   //pop from the front
    // for(int val : l){
    //     cout<< val <<" ";
    // }


    // list<int> l = {1,2,3,4,5,6};
    // for(int val : l){
    //     cout<<val<<" ";
    // }


    // 2. DEQUE: DOUBLE ENDED QUEUE
    // deque<int> d = {1,2,3,4,5};
    // for(int val : d){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout<<d[2]<<endl;




    // LIST----->

    // pair<int, int> p= {1,2};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    //  pair<string, int> p= {"priyanka",2};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    // pair<int, pair<char,int>> p= {1,{'a',3}};
    // cout<<p.first<<endl;  //1
    // cout<<p.second.first<<endl; //a
    // cout<<p.second.second<<endl; //3




    //VECTOR OF PAIR------------------------>

    // vector<pair<int, int>> vec = {{1,2},{2,3},{3,4},{4,5}};

    // vec.push_back({5,6});  //push_back assume krta hai ki apne phle se hi pair bnaya hua hai, aur ye bs insert krta hai at the end of the vector.
    // vec.emplace_back(6,7);   //in-place object create krta hai at the time of insertion.


    // // for(pair<int, int> p:vec){ //we can also write auto
    // for(auto p:vec){
    //     cout<< p.first << " " << p.second<<endl;
    // }





    // STACK

    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);

    // stack<int> s2;
    // s2.swap(s);  //it will take all elements of s, and make s empty

    // cout<<"s.size : "<<s.size()<<endl;  //0 
    // cout<<"s2.size : "<<s2.size()<<endl; //3
    // cout<< "top is : "<<s.top()<<endl;   //gives 3
    // s.pop();  //gives 3
    // cout<<"after pop : "<<s.top();

    // while(!s.empty()){
    //     cout<<s.top()<<" "; //3 2 1
    //     s.pop();
    // }
    // cout<<endl;




    //QUEUE

    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);

    // while (!q.empty())
    // {
    //   cout<< q.front()<< " ";
    //   q.pop();
    // }
    // cout<<endl;



    //PRIORITY QUEUE

    // priority_queue<int, vector<int>, greater<int>> q;
    // q.push(5);
    // q.push(3);
    // q.push(10);
    // q.push(6);
    // while (!q.empty())
    // {
    //     cout<< q.top() << " ";
    //     q.pop();
    // }
    // cout<< endl;
    



    // MAP---------------------------------------------------->

    map<string,int> m;
    m["tv"]=100;
    m["headphones"]=50;
    m["laptop"]=100;
    m["tablets"]=120;
    m["watch"]=50;

    m.insert({"camera", 25});

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;  //it will print sorted order of key not value
    }
    cout<<"count is = "<<m.count("laptop")<<endl;
    return 0; 
}
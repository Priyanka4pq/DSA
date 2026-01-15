#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <utility>
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
    vector<pair<int, int>> vec = {{1,2},{2,3},{3,4},{4,5}};

    vec.push_back({5,6});
    vec.emplace_back(6,7);


    // for(pair<int, int> p:vec){ //we can also write auto
    for(auto p:vec){
        cout<< p.first << " " << p.second<<endl;
    }


    return 0; 
}
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

// int main(){

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

    // map<string,int> m;
    // m["tv"]=100;
    // m["headphones"]=50;
    // m["laptop"]=100;
    // m["tablets"]=120;
    // m["watch"]=50;

    // // m.insert({"camera", 25});
    // m.emplace("camera", 45);
    // m.erase("tv");

    // for(auto p: m){
    //     cout<<p.first<<" "<<p.second<<endl;  //it will print sorted order of key not value
    // }
    // if(m.find("camera")!=m.end()){
    //     cout<< "found\n";
    // }else{
    //     cout<<"not found";
    // }

    // cout<<"count is = "<<m.count("laptop")<<endl;



    //MULTIMAP- can store multiple and same keys;
    // multimap<string, int> m;

    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);

    // // m.erase("tv");  //whole tv will be deleted
    // m.erase(m.find("tv"));   //only want to delete one instance, for this we can pass find()  
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }




    //UNORDERED MAP-------- it arranege data in any order

    // unordered_map<string, int> m;
    // m.emplace("tv", 100);
    // m.emplace("fridge", 100);
    // m.emplace("watch", 100);
    // m.emplace("laptop", 100);
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }





    //SET---------> stores only unique value in a ordered manner

    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(4);
    // s.insert(5);
    // s.insert(8);

    // // cout<<" lower bound = "<<*(s.lower_bound(4))<<endl; //value should be 4 or just greater than 4
    // cout<<" lower bound = "<<*(s.upper_bound(5))<<endl; //value should be grater than 5
    // cout<< s.size()<<endl;   //ignores duplicate value
    // for(int val:s){
    //     cout<< val << " ";   //not print duplicate values
    // }



    //UNORDERED SET

    // unordered_set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // for(int val:s){
    //     cout<< val << " ";   
    // }


    // int arr[5] = {3,5,1,8,2};
    // sort(arr,arr+ 5);   //n = 5
    // for(int val: arr){
    //     cout<<val<<" ";
    // }

    // vector<int> vec = {3,5,1,8,2};
    // // sort(vec.begin(), vec.end());
    // sort(vec.begin(), vec.end(), greater<int>());
    // for(int val: vec){
    //     cout<<val<<" ";
    // }

//     return 0; 
// }

// bool comparator(pair<int,int> p1, pair<int,int> p2){
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;
//     if(p1.first < p2.first) return true;
//     else return false;
// }
// int main(){  
//     vector<pair<int,int>> vec = {{3,1},{2,1},{4,1},{5,2}};
//     // sort(vec.begin(), vec.end());  //sort on the basis of first value
//     sort(vec.begin(), vec.end(), comparator); 
//     for(auto p: vec){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
// }


int main(){
    // vector<int> vec = {1,2,3,4,5};
    // // reverse(vec.begin(), vec.end());
    // reverse(vec.begin()+1, vec.begin()+3);  //for a range

    // for(auto val: vec){
    //     cout<< val <<" ";
    // }


    //next permutation

    // string s = "abc";
    // next_permutation(s.begin(), s.end());
    // prev_permutation(s.begin(),s.end());
    // cout<<s<<endl;

    // cout<< max(4,5) << " "<< min(6,1)<<endl;
    // int a= 5, b=10;
    // swap(a,b);
    // cout<<a<<endl;


    // vector<int> vec = {1,2,3,4,5};
    // cout<< *max_element(vec.begin(),vec.end())<<endl;
    // cout<< *min_element(vec.begin(),vec.end())<<endl;
    // cout<<binary_search(vec.begin(),vec.end(), 4);
    // cout<<binary_search(vec.begin(),vec.end(), 13);



    int n1 = 15;
    long int n2 = 15;
    long long int n3 = 15;
    cout<< __builtin_popcount(n1)<<endl;
    cout<< __builtin_popcountl(n2)<<endl;
    cout<< __builtin_popcountll(n3)<<endl;

    return 0;
}
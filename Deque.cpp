#include<iostream>
#include<vector>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;
    for(int i=1; i<=3; i++){
        dq.push_back(i);
    }
    for(int i=4; i<=6; i++){
        dq.push_front(i);
    }
    for(int i =0; i<dq.size(); i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(int i =0; i<dq.size(); i++){
        cout<<dq[i]<<" ";
    }
}
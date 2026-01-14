#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec;   //size 0  //1st method
    // vector<int> vec={1,2,3};        //2nd method
    // vector<int> vec(5,2);    //3rd method
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;


    // LOOP ON VECTOR

    // vector<int> vec(5,0);
    // for(int i: vec){
    //     cout<<i<<endl;
    // }

    // vector<char> vec = {'a','b','c','d','e'};
    // for(char i: vec){  //for each loop syntax
    //     cout<<i<<endl;
    // }

    // vector<char> vec = {'a','b','c','d','e'};  //size print krwana hai toh
    // vector<int> vec;   //empty vector ka size print krana ho toh
    // cout<<"size = "<< vec.size()<<endl;

    //  vector<int> vec;
    //  cout<<" size is : "<<vec.size()<<endl;
    //  vec.push_back(23);
    //  vec.push_back(24);
    //  vec.push_back(25);
    //   cout<<"After push_back size is : "<<vec.size()<<endl;
    //   for(int val: vec){
    //     cout<<val<<endl;
    //   }
    //   vec.pop_back();   //delete last element
    //   cout<<"After pop_back size is : "<<endl;
    //   for(int val: vec){
    //     cout<<val<<endl;
    //   }

    //   cout<<vec.front()<<endl;  //gives starting/front value
    //   cout<<vec.back()<<endl;  //gives starting/front value
    //   cout<<vec.at(0)<<endl;  //gives valus at particular index


    // vector<int> vec;
    // vec.push_back(23);
    // vec.push_back(24);
    // vec.push_back(25);
    // vec.push_back(15);
    // vec.push_back(12);
    // cout<<vec.size()<<endl;  //size=5
    // cout<<vec.capacity()<<endl;  //capacity=8


    // vector<int> vec = {1,2,3,4,5,6};

    // vec.erase(vec.begin());   //removes 1st element
    // vec.erase(vec.begin()+2);   //removes 2nd element

//     vec.erase(vec.begin()+ 1, vec.begin()+4);   //erase can change vector size but not capacity
//  range se ek next element ka index likhna hai ->vec.begin()+4 means 4th index se phle tk 
//  sare delete kr do
//     for(int val: vec){
//         cout<< val << " ";
//     }


//INSERT
    // vec.insert(vec.begin()+1 , 9);
    // vec.clear();  //delete all element
    //  for(int val: vec){
    //     cout<< val << " ";
    // }
    // cout<<"size : "<<vec.size()<<endl;
    // cout<<"capacity : "<<vec.capacity()<<endl;
    // cout<<"isempty : "<<vec.empty()<<endl;  //cheack whether vector is empty(1) or not(0);


    vector<int> vec = {1,2,3,4,5,6};
    // cout<<"vector begin : "<< *(vec.begin())<<endl;
    // cout<<"vector end : "<< *(vec.end())<<endl;   //it will garbage value cause end points to next to last element
    


    //LOOPS ON VECTOR

        // vector<int>::iterator it;   //it allows us to access direct memory location

        // for (it = vec.begin(); it != vec.end(); it++)   //forward loop
        // {
        //     cout<<*(it)<<" ";
        // }

        vector<int>::reverse_iterator it;
        for(it = vec.rbegin(); it != vec.rend(); it++){
            cout<<*(it) <<" ";
        }
    return 0;
}
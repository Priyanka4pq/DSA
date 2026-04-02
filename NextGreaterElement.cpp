#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// int main(){
//     vector<int> arr = {6,8,0,1,3};
//     vector<int> ans(arr.size(),0);
//     stack<int> s;
//     for(int i= arr.size()-1; i>=0; i--){
//         while(s.size()>0 && s.top() <= arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             ans[i] = -1;
//         }else{
//             ans[i]=s.top();
//         }
//         s.push(arr[i]);
//     }

//     for(int val: ans){
//         cout<< val<<" ";
//     }
//     return 0;
// }


// int main(){
//     vector<int> arr = {4,5,2,10,8};
//     vector<int> ans(arr.size(), 0);
//     stack<int> s;
//     for(int i= 0; i<arr.size(); i++){
//         while(s.size()>0 && s.top() > arr[i]){
//             s.pop();
//         }
//         if(s.empty()){
//             ans[i] = -1;
//         }else{
//             ans[i] = s.top();
//         }
//         s.push(arr[i]);
//     }
//     for(int val: ans){
//         cout<< val<<" ";
//     }
//     return 0;
// }

vector<int> prevSmaller(vector<int> &arr){
    vector<int> ans(arr.size(), 0);
    stack<int> s;
    for(int i =0; i<arr.size() ; i++){
        while(s.size() >0 && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr = {4,5,2,10,8};
    vector<int> ans = prevSmaller(arr);
    for(int val: ans){
        cout<< val<<" ";
    }
    return 0;
}
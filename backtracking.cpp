#include <bits/stdc++.h>
using namespace std;



//BACTRACKING - PRINT ALL SUBSETS OF AN ARRAY

// void printSubsets(vector<int>& arr, vector<int>& ans, int index){
//     //base case
//     if(index == arr.size()){
//         for(int val : ans){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     //include the current element
//     ans.push_back(arr[index]);
//     printSubsets(arr, ans, index+1);
//     ans.pop_back();  //backtrack
//     //exclude the current element
//     printSubsets(arr, ans, index+1);
// }
// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     vector<int> ans;   //store subsets

//     printSubsets(arr, ans, 0);
//     return 0;
// }

// ✔ It removes only the last added element
// ✔ This restores the previous state
// ✔ Then recursion explores the next unexplored path



//subset-78

// void getAllSUbsets(vector<int>& nums, vector<int>& ans, vector<vector<int>>& allSubsets, int index){
//     //base case
//     if(index == nums.size()){
//         allSubsets.push_back(ans);
//         return;
//     }
//     //include the current element
//     ans.push_back(nums[index]);
//     getAllSUbsets(nums, ans, allSubsets, index+1);
//     ans.pop_back(); //backtrack
//     //exclude the current element
//     getAllSUbsets(nums, ans, allSubsets, index+1);
// }

// int main(){
//     vector<int> nums = {1,2,3};
//     vector<vector<int>> allSubsets; //store subsets
//     vector<int> ans;  //store current subset
//     getAllSUbsets(nums,ans,allSubsets,0);

//     for(auto subset : allSubsets){
//         for(int val : subset){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//subset II - 90

void uniqueSubsets(vector<int>& nums, vector<int>& ans, vector<vector<int>>& allSubsets, int index){
    //base casee
    if(index == nums.size()){
        allSubsets.push_back(ans);
        return;
    }
    
    //include the current element
    ans.push_back(nums[index]);
    uniqueSubsets(nums, ans, allSubsets, index+1);
    ans.pop_back(); //backtrack
    
    //exclude the current element
    int idx = index+1;
    while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++; //skip duplicates
    uniqueSubsets(nums, ans, allSubsets, idx);
}

int main(){
    vector<int> nums = {1,2,2};
    sort(nums.begin(), nums.end());
    vector<vector<int>> allSubsets; //store subsets
    vector<int> ans; //store current subset
    uniqueSubsets(nums, ans, allSubsets, 0);
    for(auto subset :allSubsets){
        for(int val : subset){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


// void printNums(int n){
//     //base case
//     if(n == 0){
//         return;
//     }
//     cout<<n<<" ";
//     printNums(n-1);
// }

// int main(){
//     printNums(5);
//     return 0;
// }


//factorial of a number using recursion



// int factorial(int n){
//     //base case
//     if(n == 0){
//         return 1;
//     }else{
//         return n * factorial(n-1);
//     }
// }

// int main(){
//     int n= 5;
//     cout<<factorial(n)<<endl;
//     return 0;
// }


//sum of first n natural numbers using recursiond
// int Nsum(int n){
//     //base case
//     if(n == 1){
//         return 1;
//     }
//     return n + Nsum(n-1);
// }

// int main(){
//     cout<<Nsum(5)<<endl;
//     return 0;
// }


//fibonacci series using recursion

// int fibonacci(int n){
//     if(n ==0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }else{
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }

// int main(){
//     int n = 8;
//     cout<<fibonacci(n)<<endl;
//     return 0;
// }



// bool isSorted(vector<int> arr, int n){
//     //base case
//     if(n ==0 || n == 1){
//         return true;
//     }
//     return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
// }
// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     cout<<isSorted(arr, arr.size())<<endl;
//     return 0;
// }


// bool binSearch(vector<int>& arr, int tar, int st, int end){
//     //base case
//     if(st<=end){
//         int mid = st + (end-st)/2;
//         if(arr[mid] == tar){
//             return true;
//         }else if(arr[mid] >tar){
//             return binSearch(arr, tar, st, mid-1);
//         }else{
//             return binSearch(arr, tar, mid+1,end);
//         }
//     }
//     return false;
// }

// int main(){
//     vector<int> arr = {1,2,3,4,5,8,9,10};
//     int tar = 3;
//      if (binSearch(arr, tar, 0, arr.size() - 1))
//         cout << "Found";
//     else
//         cout << "Not Found";
//     return 0;
    
// }




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
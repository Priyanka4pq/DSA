#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//BY BRUTE FORCE------------------

// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//     int n= nums.size();

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i]+nums[j]== target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums ={2,7,11,15};
//     int target = 9;

//     vector<int> ans = pairSum(nums, target);
//     cout<<ans[0]<< ", "<<ans[1]<<endl;


//     return 0;
// }


//BY TWO POINTERS APPROACH

// vector<int> pairSum(vector<int> nums, int target){
//     int n= nums.size();
//     vector<int> ans;
//     int i=0,j=n-1;
//     while (i<j)
//     {
//     int pairSum = nums[i]+nums[j];
//       if(pairSum>target){
//         j--;
//       }
//       else if(pairSum<target){
//         i++;
//       }else{
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//       }
//     }
//     return ans;
// }
// int main(){ 
//     vector<int> nums={2,7,11,15};
//     int target=26;
//     vector<int> ans=pairSum(nums, target);
//     cout<<ans[0]<<", "<<ans[1]<<endl;
//     return 0;
// }


// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// -----by brute force's approach
// int main(){
//     vector<int> nums={3,2,3};
//     int n= nums.size();
//     for( int val: nums){
//         int freq=0;
//         for(int el : nums){
//             if(el==val){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             cout<<val;
//             return 0;
//         }
//     }
//     cout<< -1;
//     return 0;
// }


// int main(){
//   int nums[]={1,1,2,2,2};
//   int n = sizeof(nums) / sizeof(nums[0]);
//   int freq=1;
//   sort(nums, nums + n);
//   for(int i=1;i<n;i++){
//     if(nums[i]==nums[i-1]){
//         freq++;
//     }else{
//         freq=1;
//     }
//     if(freq> n/2){
//         cout<<nums[i];
//         break;
//     }
//   }
//     return 0;
// }

//USING VECTOR

int main() {
    vector<int> nums = {1, 1, 2, 2, 2};
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
        }

        if (freq > n / 2) {
            cout << nums[i];
            return 0;
        }
    }

    cout << -1;
    return 0;
}

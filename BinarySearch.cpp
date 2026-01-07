#include <iostream>
#include <vector>
using namespace std;

// int binarySearch(vector<int> arr1, int target1){
//     int st = 0, end= arr1.size()-1;
//     while(st<=end){
//         // int mid = (st+end)/2;    
//         int mid =st+ (end-st)/2;    //optimised formula of above
//         if(target1>arr1[mid]){
//             st=mid+1;
//         }else if(target1<arr1[mid]){
//             end= mid-1;
//         }else{
//             // return arr1[mid];   //give value
//             return mid;   //give index
//         }
//     }
//     return -1;
// }

// int main(){
//     // vector<int> arr1 = {-1,0,3,4,5,9,12};  //odd
//     // int target1= 12;

//     // cout<<binarySearch(arr1,target1)<<endl;

//     vector<int> arr2 = {-1,0,3,5,9,12};  //even
//     int target2 = 0;
//     cout<<binarySearch(arr2,target2)<<endl;
//     return 0;
// }



//  USING RECURSION

int recBinarySearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid= st+(end-st)/2;

        if(tar>arr[mid]){
            return recBinarySearch(arr, tar , mid+1, end);
        } else if(tar<arr[mid]){
            return recBinarySearch(arr, tar, st, mid-1);
        } else{
            return mid;
        }
    }
    return -1;
}

int main(){
    // vector<int> arr1 = {-1,0,3,4,5,9,12};  //odd
    // int target1= 12;

    // cout<<recbinarySearch(arr1,target1)<<endl;

    vector<int> arr2 = {-1,0,3,5,9,12};  //even
    int target2 = 0;
    cout<<recBinarySearch(arr2,target2, 0, arr2.size()-1)<<endl;
    return 0;
}

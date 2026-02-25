#include <bits/stdc++.h>
using namespace std;

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> A ={ 1,5,7,8};
//     vector<int> B ={ 12,14,16,19};
//     vector<int> C;
//     int n = A.size();
//     int m = B.size();
//     int i=0,j=0;

//     int count = 0;
//     while(i<n && j<m){
//         count++;
//         if(A[i]<B[j]){
//             C.push_back(A[i]);
//             i++;
//         }
//         else{
//             C.push_back(B[j]);
//             j++;
//         }
//     }
//      cout << "1st loop ran: " << count << " times" << endl;
//     while(i<n){
//         C.push_back(A[i]);
//         i++;
//     }
//     while(j<m){
//         C.push_back(B[j]);
//         j++;
//     }
//     for(int x : C){
//         cout<<x<<" ";
//     }
//     return 0;
// }



// void merge(vector<int>& arr, int st, int mid, int end){
//     vector<int> temp;
//     int i = st, j = mid+1;

//     while(i <= mid && j <=end){
//         // if(arr[i]<=arr[j]){   //increasing order
//         if(arr[i]>=arr[j]){   //decreasing order
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(i <=mid){
//         temp.push_back(arr[i]);
//         i++;
//     }
//     while(j <= end){
//         temp.push_back(arr[j]);
//         j++;
//     }
//     for(int idx = 0; idx < temp.size(); idx++){
//         arr[idx+st] = temp[idx];
//     }
// }
// void mergeSort(vector<int>& arr, int st, int end){
//     if(st< end){
//         int mid = st+(end-st)/2;
//         mergeSort(arr, st, mid);  //left half
//         mergeSort(arr, mid+1, end); //right half

//         merge(arr, st, mid, end);
//     }
// }
// int main(){
//     vector<int> arr = {38,27,43,3,9,82,10};
//     mergeSort(arr, 0 , arr.size()-1);
//     for(int x : arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }




//inversion count


int merge(vector<int>& arr, int st ,int mid, int end){
    vector<int> temp;
    int i = st, j = mid+1;
    int count = 0;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            count += (mid - i +1); // all the elements from i to mid will be greater than arr[j]
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0; idx <temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
    return count;
}

int inversionCount(vector<int>& arr, int st , int end){
    while(st<end){
        int mid = st+(end-st)/2;
        int leftCount = inversionCount(arr,st,mid);
        int rightCount = inversionCount(arr,mid+1, end);
        int mergeCount = merge(arr, st, mid, end);
        return leftCount + rightCount + mergeCount;
    }
    return 0;
}
int main(){
    vector<int> arr = {6,3,5,2,7};
    cout<<"Inversion count is : "<<inversionCount(arr, 0, arr.size()-1)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = st-1, pivot = arr[end];
    for(int j = st; j<end; j++){
        // if(arr[j] <= pivot){   // increasing order
        if(arr[j] >= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}
void quickSort(vector<int> &arr, int st, int end ){{
    if(st<end){
        int pivot = partition(arr, st, end);

        quickSort(arr, st, pivot-1);   // left part of the array
        quickSort(arr, pivot+1, end);  //right part of the array
    }
}   
}

int main(){
    vector<int> arr = {12,32,35,8,54,34,17};
    quickSort(arr, 0, arr.size()-1);
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
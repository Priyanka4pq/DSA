#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int  i = 0; i < n-1 ; i++){
        for (int j = 0; j < n-i-1 ; j++)
        {
           if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
           }
        }
    }
}

int main(){
    int arr[] = {4,1,5,2,3};
    int n = 5;
    bubbleSort(arr, n);
    // cout<<bubbleSort(arr, n)<<endl; // it is wrong cause it bubbleSort fn. is void . it didn't return anything so it has nothing to print.
    for(int i = 0; i<= n-1 ;  i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}
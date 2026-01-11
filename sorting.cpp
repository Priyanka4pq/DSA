#include <iostream>
#include <algorithm>
using namespace std;

// void bubbleSort(int arr[], int n){
//     int count = 0;
//     for(int  i = 0; i < n-1 ; i++){   //O(n^2)-- is not a good time complexity.
//         bool isSwap = false;
//         count++;
//         for (int j = 0; j < n-i-1 ; j++)
//         {
//            if(arr[j] > arr[j+1]){
//             swap(arr[j], arr[j+1]);
//             isSwap = true;
//            }
//         }
//         if(!isSwap){   //array is already sorted
//             break;
//         }
//     }
//     cout<<count<<endl;
// }

// int main(){
//     int arr[] = {4,1,5,2,3};
//     int n = 5;
//     bubbleSort(arr, n);
//     // cout<<bubbleSort(arr, n)<<endl; // it is wrong cause it bubbleSort fn. is void . it didn't return anything so it has nothing to print.
//     for(int i = 0; i<= n-1 ;  i++){
//         cout<<arr[i]<< " ";
//     }
//     return 0;
// }



// SELECTION SORT

// void selectionSort(int arr[] , int n){
//     for(int i=0 ; i<n-1 ; i++ ){
//         int smallestIdx = i;    //unsorted part starting   //0->4
//         for(int j = i+1; j<n; j++){
//             if(arr[j] <arr[smallestIdx]){  //1<4
//                 smallestIdx = j;  //1
//             }
//         }
//         swap(arr[i], arr[smallestIdx]);     //0,1
//     }
// }

void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<< arr[i]<< " ";
    }
}

// int main(){
//     int n = 5;
//     int arr[]= {4,6,5,2,3};

//     selectionSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }


void insertionSort(int arr[], int n){
    
    for(int i = 1; i<n-1; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;  //placing the cureent elem in its correct order
    }
}

int main(){
    int n = 5;
    int arr[]= {4,6,5,2,3};

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
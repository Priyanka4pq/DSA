#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
    int count = 0;
    for(int  i = 0; i < n-1 ; i++){   //O(n^2)-- is not a good time complexity.
        bool isSwap = false;
        count++;
        for (int j = 0; j < n-i-1 ; j++)
        {
           if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            isSwap = true;
           }
        }
        if(!isSwap){   //arra is already sorted
            break;
        }
    }
    cout<<count<<endl;
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
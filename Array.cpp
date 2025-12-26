#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// int main(){
    // int marks[6] = {99,98,90,54,87,65};   //size can be changed
    // marks[0]=12;  //0 to size-1
    // double price[]={1,2,3,4,5};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // cout<<price[3];

    // cout<<sizeof(marks)/sizeof(int);  //it gives the size of array i.e. 6

    //LOOPS ON ARRAY: 0 to size-1
    // int size=6;
    // for(int i=0;i<size;i++){
    //     cout<<marks[i]<<endl;
    // }


    //user se input bhi le skte hai
    // int size=5;
    // int marks[size];

    // for(int i=0;i<size; i++){
    //     cin>> marks[i];
    // }
    // for( int i=0; i<size;i++){
    //     cout<<marks[i]<<" ";
    // }



    // Q: Find smallest and largest no. in an array
//     int size=6;
//     int marks[size];
//     for(int i=0; i<size; i++){
//         cin>>marks[i];
//     }
//     for(int i=0; i<size; i++){
//         cout<<marks[i]<<endl;
//     }
//     int smallest=marks[0];
//     int largest=marks[0];
//     for(int i=0; i<size; i++){
//        if(marks[i]<smallest){
//         smallest=marks[i];
//        }
//        if(marks[i]>largest){
//         largest=marks[i];
//        }

//     }
//         cout << "Smallest number is: " << smallest << endl;
//     cout << "Largest number is: " << largest << endl;


// only smallest no.
// int num[]={5,15,22,1,-15,-24};
// int size=6;

// int smallest = INT_MAX;   //means infinity
// int largest = INT_MIN;
// for(int i=0; i<size; i++){
//     smallest= min(num[i],smallest);
//     largest = max(num[i],largest);
// }
// cout<<"smallest = "<<smallest<<endl;
// cout<<"largest = "<<largest<<endl;


//smallest and largest no. index will be print

// int num[]={5, 15, 22, 1, -15, -24};
// int size=6;
// int smallest= INT_MAX;
// int largest = INT_MIN;

// int minIndex=-1;
// int maxIndex=-1;

// for(int i=0;i<size;i++){
//     if(num[i]<smallest){
//         smallest=num[i];
//         minIndex=i;
//     }
//     if(num[i]>largest){
//         largest=num[i];
//         maxIndex=i;
//     }
// }

//     cout << "Smallest number: " << smallest 
//          << " at index " << minIndex << endl;

//     cout << "Largest number: " << largest 
//          << " at index " << maxIndex << endl;

// return 0;
// }




// ------------- PASS BY REFRENCE----------

// void changeArr(int arr[], int size){
//     cout<<"in function\n";
//     for(int i=0;i<size;i++){
//         arr[i] *=2;
//     }
// }
// int main(){
//     int arr[]={1,2,3};

//     changeArr(arr,3);
//       for(int i=0;i<3;i++){
//       cout<< arr[i]<<endl;
//     }
//     return 0;
// }



// LINEAR SEARCH  ( O(n) )

// int linearSearch(int arr[],int sz, int target){
//     for(int i=0; i<sz;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;   ///NOT FOUND
// }
// int main(){
//     int arr[]= {4,3,7,8,1,2,5};
//     int sz = 7;
//     int target = 8;

//     cout<<linearSearch(arr, sz,target);
//     return 0;
// }


// Q: Reverse an array

void reverseArray(int arr[], int size){
    int start =0, end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size = 7;
    reverseArray(arr,size);

    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
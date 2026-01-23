#include<iostream>
using namespace std;

int main(){
    // int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int rows = 3, cols = 3;
    // matrix[2][2] = 10; //updating element at 2nd row and 2nd column
    // cout<<"Matrix Element at [2][2] is : "<<matrix[2][2]<<endl;

    //loop to print all elements of matrix
    // for(int i = 0; i<rows; i++){
    //     for(int j= 0; j<cols; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;


    //by taking input from user
    int matrix[3][3];
    int rows = 3, cols = 3;
    cout<<"Enter elements of matrix: "<<endl;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
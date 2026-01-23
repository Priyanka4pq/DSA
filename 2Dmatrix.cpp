#include<bits/stdc++.h>
using namespace std;

// int main(){
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
    // int matrix[3][3];
    // int rows = 3, cols = 3;
    // cout<<"Enter elements of matrix: "<<endl;
    // for(int i = 0; i<rows; i++){
    //     for(int j = 0; j<cols; j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    // cout<<"The matrix is: "<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;



    // int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int rows = 3, cols = 3;

    // int target = 5;
    // for(int i =0; i<rows; i++){
    //     for(int  j =0; j<cols; j++){
    //         if(matrix[i][j] == target){
    //             cout<<"Element found at index: ["<<i<<"],["<<j<<"]"<<endl;
    //             return 0;
    //         }
    //     }
    // }

//     return 0;
// }


//by pass by reference

// bool linearSearch(int matrix[][3], int rows, int cols, int target){
//     for(int i =0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(matrix[i][j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3, cols = 3;
//     cout<<linearSearch(matrix, rows, cols , 14)<<endl;
//     return 0;
// }

//by STL

// pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int target){
//         for(int i =0; i<rows; i++){
//         for(int j=0; j<cols; j++){
//             if(matrix[i][j] == target){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }

// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3, cols = 3;
//     auto ans = linearSearch(matrix, rows, cols , 1);
//     if(ans.first == -1 && ans.second == -1){
//         cout<<"Element not found"<<endl;
//     }else{
//         cout<<"Element found at index : ["<<ans.first<<"],["<<ans.second<<"]"<<endl;
//     }
//     return 0;
// }



// //max row sum
// int getmaxSum(int matrix[][3], int cols, int rows){
//     int maxSum = INT_MIN;
//     for(int i =0; i<rows; i++){
//         int sum = 0;
//         for(int j=0; j<cols;j++){
//             sum += matrix[i][j];
//         }
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }
// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3, cols = 3;
//     cout<<getmaxSum(matrix, cols, rows)<<endl;
//     return 0;
// }


//max col sum
// int getmaxSum(int matrix[][3], int cols, int rows){
//     int maxSum = INT_MIN;
//     for(int j=0; j<cols;j++){
//         int sum = 0;
//         for(int i =0; i<rows; i++){
//             sum += matrix[i][j];
//         }
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }
// int main(){
//     int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3, cols = 3;
//     cout<<getmaxSum(matrix, cols, rows)<<endl;
//     return 0;
// }


//DIAGONAL SUM

int diagonalSum(int matrix[][4], int rows, int cols){
    int sum = 0;
    for(int i = 0; i<rows; i++){
        for(int j =0; j<cols; j++){
            if(i == j || (i + j) == rows - 1){
                sum += matrix[i][j];
                // cout<<matrix[i][j]<<" ";
            }
        }
    }
    return sum;
}

int main(){
    // int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int rows = 3, cols = 3;
    int rows = 4, cols = 4;
    cout<<diagonalSum(matrix, rows, cols)<<endl;
    return 0;
}
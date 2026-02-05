#include <bits/stdc++.h>
using namespace std;


// void printNums(int n){
//     //base case
//     if(n == 0){
//         return;
//     }
//     cout<<n<<" ";
//     printNums(n-1);
// }

// int main(){
//     printNums(5);
//     return 0;
// }


//factorial of a number using recursion



// int factorial(int n){
//     //base case
//     if(n == 0){
//         return 1;
//     }else{
//         return n * factorial(n-1);
//     }
// }

// int main(){
//     int n= 5;
//     cout<<factorial(n)<<endl;
//     return 0;
// }


//sum of first n natural numbers using recursiond
// int Nsum(int n){
//     //base case
//     if(n == 1){
//         return 1;
//     }
//     return n + Nsum(n-1);
// }

// int main(){
//     cout<<Nsum(5)<<endl;
//     return 0;
// }


//fibonacci series using recursion

// int fibonacci(int n){
//     if(n ==0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }else{
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }

// int main(){
//     int n = 8;
//     cout<<fibonacci(n)<<endl;
//     return 0;
// }



bool isSorted(vector<int> arr, int n){
    //base case
    if(n ==0 || n == 1){
        return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<isSorted(arr, arr.size())<<endl;
    return 0;
}
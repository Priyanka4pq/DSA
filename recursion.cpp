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

int Nsum(int n){
    //base case
    if(n == 1){
        return 1;
    }
    return n + Nsum(n-1);
}

int main(){
    cout<<Nsum(5)<<endl;
    return 0;
}
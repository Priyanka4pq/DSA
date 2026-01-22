#include <bits/stdc++.h>
using namespace std;

// class Solution{
//     public: 
//     string isPrime(int n){
//         if(n<=1) return "false";
//         for(int i =2; i*i<=n; i++){
//             if(n%i == 0) return "false";
//         }
//         return "true";
//     }
// };

// int main(){
//     // Math for DSA
//     Solution obj;
//     int n = 3;
//     cout<<obj.isPrime(n)<<endl;
//     return 0;
// }


//by sieve of eratosthenes
// class Solution{
//     public:
//     int isPrime(int n){
//         if(n<=2) return 0;
//         vector<bool> isPrime(n, true);
        
//         int count = 0;
//         for(int i =2; i<n; i++){
//             if(isPrime[i]){
//                 count++;
//                 for(int j = i*i; j<n; j+=i){
//                     isPrime[j]= false;
//                 }
//             }
//         }
//         return count;   
//     }
// };
// int main(){
//     Solution obj;
//     int n = 10;
//     cout<<obj.isPrime(n)<<endl;
// }


//DIGITS IN A NUMBER
// class Solution{
//     public:
//     void printDigits(int n){
//         if(n==0) return;
//         int rem = n%10;
//         cout<<rem<<" ";
//        printDigits(n/10);
//     }
// };

// int main(){
//     Solution obj;
//     int n = 12345;
//     obj.printDigits(n);
//     return 0;
// }

// void printDigits(int n){
//     int count = 0;
//     int sum = 0;
//     while(n != 0){
//         int rem = n%10;
//         sum += rem;
//         count++;
//         n = n/10;
//     }
//     cout<<sum<<endl;
//     cout<<count<<endl;
// }
// int main(){
//     int n =1233;
//     // printDigits(n);
//     cout<<(int)(log10(n) + 1)<<endl;  //short way to find number of digits
//     return 0;
// }


//ARMSTRONG NUMBER
// class Solution{
//     public:
//     bool isArmStrong(int n){
//         int copyN = n;
//         int sumOfCubes = 0;
//         while(n != 0){
//             int rem = n%10;
//             sumOfCubes += rem*rem*rem;
//             n = n/10;
//         }
//         return sumOfCubes == copyN;
//     }
// };
// int main(){
//     Solution obj;
//     int n = 1353;

//     if(obj.isArmStrong(n)){
//         cout<<"Armstrong Number"<<endl;
//     }else{
//         cout<<"Not an Armstrong Number"<<endl;
//     }
// }


//GCD AND LCM

class Solution{
    public:
    // int gcd(int a, int b){
    //     while(a>0 && b>0){
    //         if(a>b){
    //             a = a%b;
    //         }else{
    //             b= b%a;
    //         }
    //     }
    //     if(a == 0) return b;
    //     return a;
    // }

    //via recursion
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a%b);
    }
};
int main(){
    Solution obj;
    // int a = 12, b= 15;
    int a = 12, b= 0;
    cout<<obj.gcd(a,b)<<endl;
}
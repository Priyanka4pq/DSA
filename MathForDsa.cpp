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
class Solution{
    public:
    int isPrime(int n){
        if(n<=2) return 0;
        vector<bool> isPrime(n, true);
        
        int count = 0;
        for(int i =2; i<n; i++){
            if(isPrime[i]){
                count++;
                for(int j = i*i; j<n; j+=i){
                    isPrime[j]= false;
                }
            }
        }
        return count;   
    }
};
int main(){
    Solution obj;
    int n = 10;
    cout<<obj.isPrime(n)<<endl;
}
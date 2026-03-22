#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i = 0; i<n;i++){
//         cin>>arr[i];
//     }
//     int currSum = arr[0];
//     int maxSum = arr[0];
//     for(int x: arr){
//         currSum = max(x, currSum+x);
//         maxSum = max(currSum,maxSum);
//     }
//     cout<<maxSum<<" ";
//     return 0;
// }


// bool isPrime(int n){
//     if(n<=1) return false;
//     for(int i = 2; i*i <=n ;i++){
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int l , r;
//     cin>>l>>r;
//     for(int i = l; i<=r; i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int> nums(n);
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }
//     int first = -1;
//     int second = -1;
//     for(int x :nums){
//         if(x > first){
//             second = first;
//             first = x;
//         }else if(x > second && x != first){
//             second = x;
//         }
//     }
//     cout<<"Second largest :"<<second<<endl;
//     return 0;
// }



// int main(){
//     string str;
//     cin>>str;
//     int count = 0;
//     for(int s: str){
//         s = tolower(s);
//         if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
//             count ++;
//         }
//     }
//     cout<<"Vowels are : "<<count<<endl;
//     return 0;
// }



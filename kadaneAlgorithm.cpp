// #include <iostream>
// #include <climits>   // or <limits.h>
// using namespace std;

// int main(){

    //MAXIMUN subarray problem

    // int n=5;
    // int arr[5]={1,2,3,4,5};
    // for(int start=0;start<n;start++){
    //     for(int end=start;end<n;end++){
    //         for(int i=start;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    //MAXIMUN SUBARRAY SUM-----by brute force approach

    // int n=5;
    // int arr[5]={1,2,3,4,5};
    // int maxSum = INT_MIN;
    // for(int st=0;st<n;st++){
    //     int currSum =0;
    //     for(int end=st ; end<n ; end++){
    //         currSum += arr[end];
    //         maxSum=max(currSum,maxSum);
    //     }
    // }
    // cout<< "max subarray sum = "<<maxSum<<endl;

    // ----by kadane's approach
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of elements

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int currSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < n; i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;

    return 0;
}
    
//     return 0;
// }
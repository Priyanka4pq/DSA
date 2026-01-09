#include <iostream>
#include <vector>
using namespace std;

bool isValid(const vector<int>& nums, int k , int maxAllowedSum){
    int subArray =1;
    int currSum =0;
    for(int num:nums){
        if(num > maxAllowedSum) return false;
        if( currSum + num <= maxAllowedSum){
            currSum += num;
        }else{
            subArray++;
            currSum = num;
        }
    }
    return subArray <= k;
}

int splitArrayLargestSum(const vector<int>& nums, int n, int k ){
    int st = 0, end = 0;
    for(int num:nums){
        st = max(st,num);
        end += num;
    }
    int ans = end;
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(isValid(nums, k , mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {7,2,5,10,8};
    int n = 5, k = 2;
    cout<<"Largest minimum sum is : "<<splitArrayLargestSum(nums, n, k)<<endl; 
    return 0;
}
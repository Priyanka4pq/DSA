#include <iostream>
#include <vector>
using namespace std;

bool isValid(const vector<int>& nums, int m, int maxAllowedTimes){
    int painter = 1, currTime = 0;
    for(int num:nums){
        if(num > maxAllowedTimes) return false;
        if(currTime + num <= maxAllowedTimes){
            currTime += num;
        }else{
            painter++;
            currTime = num;
        }
    }
    return painter <= m;
}

int PaintersPartition(const vector<int>& nums, int n, int m){
    int st = 0, end = 0;
    for(int num:nums){
        st= max(st,num);
        end += num;
    }
    int ans = end;
    while (st <= end)
    {
       int mid = st + (end - st)/2;
       if(isValid(nums, m, mid)){
        ans = mid;
        end = mid-1;
       }else{
        st = mid + 1;
       }
    }
    return ans;
    
}

int main(){
    vector<int> nums = {40,30,10,20};
    int n = 4, m = 2;
    cout<<"Minimum maximum time is : "<<PaintersPartition(nums, n, m)<<endl;
    return 0;
}
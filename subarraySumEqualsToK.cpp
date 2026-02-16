#include <bits/stdc++.h>
using namespace std;

int SubArraySumEqualsK(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;
    vector<int> prefixSum(n,0);

    prefixSum[0] = nums[0];
    for(int i =1; i<n ; i++){
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    //hash map to store frequency of prefix sums
    unordered_map<int,int> m;
    for(int j = 0; j<n ; j++){
        //case1 - subarray starts from index 0
        if(prefixSum[j] == k){
            count++;
        }

        //case2 - subarray starts from index >0
        int requiredSum = prefixSum[j]-k;
        if(m.find(requiredSum) != m.end()){
            count += m[requiredSum];     //it count frequency
        }
        //update the frequency of the prefix sum
        m[prefixSum[j]]++;   //Update the map
    }
    return count;
}

int main(){
    vector<int> nums = {1,2,3,-2,5,-3,1,2};
    int k=6;
    cout<<SubArraySumEqualsK(nums, k)<<endl;
    return 0;
}
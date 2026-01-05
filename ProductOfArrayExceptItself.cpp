#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArrayExceptItself(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n);

    for(int  i=0; i<n;i++){
        int product = 1;
        for(int j=0; j<n;j++){
            if(i!=j){
                product *= nums[j];   //Outer loop decides what to exclude (i), inner loop decides what to include (j).
            }
        }
        ans[i] = product;
    }
    return ans;
}


int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> result= productOfArrayExceptItself(nums);
    for(int x :result){
        cout<<x<<" ";
    }
    return 0;
}
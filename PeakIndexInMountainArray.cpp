#include <iostream>
#include <vector>
using namespace std;


int peakIndexInMountainArray(vector<int> nums){
    int n = nums.size();
    int st=1, end= n-2;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            //  return nums[mid];  //return value
            return mid; //return index
        }else{
                if(nums[mid-1] < nums[mid]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
    }
    return -1;

}
int main(){

    vector<int> nums={0,3,8,9,5,2};
    cout<<"peak element is : "<<peakIndexInMountainArray(nums)<<endl;

    return 0;
}
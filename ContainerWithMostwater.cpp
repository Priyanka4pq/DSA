#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;


int maxArea(vector<int>& height){
    int n = height.size();
    int maxArea = 0;
    int count = 0;
    for(int i=0;i<n-1;i++){   //last element can't form a pair alone
        count++;
        for(int j= i+1 ;j<n; j++ ){
            int width= j-i;
            int h = min(height[i],height[j]);
            int area = width*h;
            maxArea= max(area, maxArea);
        }
    }
    cout<<"outer loop count: "<<count<<endl;
    return maxArea;
}

int main(){
    vector<int> height={1,8,6,2,5,4,8,7};
    int result = maxArea(height);
    cout<<"Maximun water stored :"<<result<<endl;
    return 0;
}
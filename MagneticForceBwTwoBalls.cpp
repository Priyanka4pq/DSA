#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& position, int n, int m, int maxAllowedDistance ){
    int balls = 1, lastPosition = position[0];
    for(int i = 0; i<n; i++){
        if(position[i] - lastPosition >= maxAllowedDistance){
            balls++;
            lastPosition = position[i];
        }
        if(balls >= m) return true;
    }
    return false;
}

int MagneticForceBetweenTwoBalls(vector<int>& position, int n, int m){
    sort(position.begin(), position.end());
    int st = 1, end = position[n-1]-position[0], ans = -1;

    while (st<=end)
    {
        int mid = st + (end - st)/2;
        if(isValid(position, n, m, mid)){
            ans = mid;
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> position = {10,23,27,14,17};
    int n = 5;
    int m = 3;
    cout<<MagneticForceBetweenTwoBalls(position, n, m)<<endl;
    return 0;
}
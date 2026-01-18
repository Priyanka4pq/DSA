#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> A ={ 1,5,7,8};
    vector<int> B ={ 12,14,16,19};
    vector<int> C;
    int n = A.size();
    int m = B.size();
    int i=0,j=0;

    int count = 0;
    while(i<n && j<m){
        count++;
        if(A[i]<B[j]){
            C.push_back(A[i]);
            i++;
        }
        else{
            C.push_back(B[j]);
            j++;
        }
    }
     cout << "1st loop ran: " << count << " times" << endl;
    while(i<n){
        C.push_back(A[i]);
        i++;
    }
    while(j<m){
        C.push_back(B[j]);
        j++;
    }
    for(int x : C){
        cout<<x<<" ";
    }
    return 0;
}
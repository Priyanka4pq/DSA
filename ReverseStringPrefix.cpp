#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<char> s = {'a','b','c','d','e'};
    int k = 3;

    int st = 0, end = k-1;
    while(st<end){
        swap(s[st], s[end]);
        st++; end--;
    }
    for(char val : s){
        cout<< val<<" ";
    }
    return 0;
}
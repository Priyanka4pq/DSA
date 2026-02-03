#include <bits/stdc++.h>
using namespace std;


void printNums(int n){
    //base case
    if(n == 0){
        cout<<"1";
        return;
    }
    cout<<n<< " ";
    printNums(n-1);
}

int main(){

    printNums(5);
    return 0;
}
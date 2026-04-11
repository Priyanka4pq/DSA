#include<bits/stdc++.h>
using namespace std;

int getCelebrity(vector<vector<int>> &arr){
    int n = arr.size();
    stack<int> st;

    for(int i=0;i<n;i++){
        st.push(i);
    }
    while(st.size()>1){
        int i = st.top();
        st.pop();

        int j = st.top();
        st.pop();

        if(arr[i][j] == 1){
            st.push(j);
        }else{
            st.push(i);
        }
    }
    int cleb = st.top();
    for(int i=0; i<n; i++){
        if((i != cleb) && (arr[cleb][i] == 1 || arr[i][cleb] == 0)){
            return -1;
        }
    }

    return cleb;
}

int main(){
    vector<vector<int>> arr = {{0,1,0},{0,0,0},{0,1,0}};
    int ans = getCelebrity(arr);
    cout<<"Celebrity is :"<<ans<<endl;
    return 0;
}
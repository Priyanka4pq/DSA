#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> matrix, int rows, int cols){
    vector<int> ans;
    int srow = 0, scol = 0, erow = rows-1, ecol = cols-1;
    while(srow <= erow && scol <= ecol){
        //top
        for(int i = scol ; i<=ecol; i++){
            ans.push_back(matrix[srow][i]);
        }
        for(int j = srow ; j<= erow; j++){
            ans.push_back(matrix[j][scol]);
        }
        for(int i = ecol ; i>=scol; i--){
            if(srow == erow){
                break;
            }
            ans.push_back(matrix[erow][i]);
        }
        for(int j = erow-1; j>=srow+1; j--){
            if(scol == ecol){
                break;
            }
            ans.push_back(matrix[j][ecol]);
        }
        srow++; scol++; ecol--; erow--;
    }
    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> res = spiralMatrix(matrix, rows, cols);
    for (int x : res) cout << x << " ";

    return 0;
}
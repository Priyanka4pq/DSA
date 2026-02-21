#include <bits/stdc++.h>
using namespace std;



//BACTRACKING - PRINT ALL SUBSETS OF AN ARRAY

// void printSubsets(vector<int>& arr, vector<int>& ans, int index){
//     //base case
//     if(index == arr.size()){
//         for(int val : ans){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     //include the current element
//     ans.push_back(arr[index]);
//     printSubsets(arr, ans, index+1);
//     ans.pop_back();  //backtrack
//     //exclude the current element
//     printSubsets(arr, ans, index+1);
// }
// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     vector<int> ans;   //store subsets

//     printSubsets(arr, ans, 0);
//     return 0;
// }

// ✔ It removes only the last added element
// ✔ This restores the previous state
// ✔ Then recursion explores the next unexplored path



//subset-78

// void getAllSUbsets(vector<int>& nums, vector<int>& ans, vector<vector<int>>& allSubsets, int index){
//     //base case
//     if(index == nums.size()){
//         allSubsets.push_back(ans);
//         return;
//     }
//     //include the current element
//     ans.push_back(nums[index]);
//     getAllSUbsets(nums, ans, allSubsets, index+1);
//     ans.pop_back(); //backtrack
//     //exclude the current element
//     getAllSUbsets(nums, ans, allSubsets, index+1);
// }

// int main(){
//     vector<int> nums = {1,2,3};
//     vector<vector<int>> allSubsets; //store subsets
//     vector<int> ans;  //store current subset
//     getAllSUbsets(nums,ans,allSubsets,0);

//     for(auto subset : allSubsets){
//         for(int val : subset){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//subset II - 90

// void uniqueSubsets(vector<int>& nums, vector<int>& ans, vector<vector<int>>& allSubsets, int index){
//     //base casee
//     if(index == nums.size()){
//         allSubsets.push_back(ans);
//         return;
//     }
    
//     //include the current element
//     ans.push_back(nums[index]);
//     uniqueSubsets(nums, ans, allSubsets, index+1);
//     ans.pop_back(); //backtrack
    
//     //exclude the current element
//     int idx = index+1;
//     while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++; //skip duplicates
//     uniqueSubsets(nums, ans, allSubsets, idx);
// }

// int main(){
//     vector<int> nums = {1,2,2};
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> allSubsets; //store subsets
//     vector<int> ans; //store current subset
//     uniqueSubsets(nums, ans, allSubsets, 0);
//     for(auto subset :allSubsets){
//         for(int val : subset){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//SUDUKO SOLVER - 37

// bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
//     //check horizontal
//     for(int i=0; i<9; i++){
//         if(board[row][i] == dig)
//         return false;
//     }

//     //check vertically
//     for(int j=0; j<board.size(); j++){
//         if(board[j][col]==dig){
//             return false;
//         }
//     }

//     //check 3*3 grid
//     int startRow = (row/3)*3;
//     int startCol = (col/3)*3;
//     for(int i=startRow; i<=startRow+2; i++){ 
//         for(int j=startCol; j<=startCol+2; j++){
//             if(board[i][j] == dig){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// bool helper(vector<vector<char>>& board, int row, int col){
//     //base case
//     if(row == board.size()) return true;
//     if(col == board[0].size()) return helper(board, row+1, 0);

//     if(board[row][col] != '.'){
//         return helper(board,row,col+1);
//     }

//     for(char dig='1'; dig<='9'; dig++){
//         if(isSafe(board,row,col,dig)){
//             board[row][col] = dig;
//             if(helper(board, row, col+1)) return true;
//             board[row][col] = '.'; //backtrack
//         }
//     }
//     return false;
// }

// int main(){
//     vector<vector<char>> board = {
//         {'5','3','.','.','7','.','.','.','.'},
//         {'6','.','.','1','9','5','.','.','.'},
//         {'.','9','8','.','.','.','.','6','.'},
//         {'8','.','.','.','6','.','.','.','3'},
//         {'4','.','.','8','.','3','.','.','1'},
//         {'7','.','.','.','2','.','.','.','6'},
//         {'.','6','.','.','.','.','2','8','.'},
//         {'.','.','.','4','1','9','.','.','5'},
//         {'.','.','.','.','8','.','.','7','9'}
//     };
//       if(helper(board, 0, 0)){
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 cout << board[i][j] << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         cout << "No solution exists" << endl;
//     }
//     return 0;
// }




//RAT IN A MAZE - 79

void helper(vector<vector<int>>& matrix, int r, int c, string path, vector<string>& ans){
    int n= matrix.size();
    //base case
    if(r >= n || c >= n || r <0 || c<0 ||matrix[r][c] == 0 || matrix[r][c] == -1){
        return;
    }
    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }

    matrix[r][c] = -1; //mark as visited
    helper(matrix, r+1, c, path+'D', ans); //down
    helper(matrix, r-1, c, path+'U', ans); //up
    helper(matrix, r, c-1, path+'L', ans); //left
    helper(matrix, r, c+1, path+'R', ans); //right

    matrix[r][c] = 1; //backtrack
}

vector<string> findPath(vector<vector<int>>& matrix){
    int n = matrix.size();
    vector<string> ans;
    string path = "";;
    helper(matrix, 0, 0, path, ans);
    return ans;
}
int main(){
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string> ans = findPath(matrix);
    for(string path:ans){
        cout<<path<<" ";
    }
    return 0; 
}
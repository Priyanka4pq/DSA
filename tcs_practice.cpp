#include<bits/stdc++.h>
using namespace std;

// int SecondSmallest(vector<int> &arr){
//     int first = INT_MAX;
//     int second = INT_MAX;
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i]<first){
//             second = first;
//             first = arr[i];
//         }else if(arr[i]>first && arr[i]<second){
//             second = arr[i];
//         }
//     }
//     return second;
// }

// int main(){
//     vector<int> arr = {4, 2, 7, 1, 3};
//     cout<<SecondSmallest(arr);
//     return 0;
// }



// bool isAnagram(string s1, string s2){
//     if(s1.length() != s2.length()){
//         return false;
//     }
//     vector<int> freq(26,0);
//     for(int i=0; i< s1.length(); i++){
//         freq[s1[i]-'a']++;
//         freq[s2[i]-'a']--;
//     }
//     for(int i=0; i<26; i++){
//         if(freq[i]!=0)
//         return false;
//     }
//     return true;
// }

// int main(){
//     string s1 ="listen", s2 = "silent";
//     if(isAnagram(s1,s2)){
//         cout<<"Anagram";
//     }else{
//         cout<<"notAnagram";
//     }
//     return 0;
// }



// int firstNonRepeating(string s1){
//     vector<int> freq(26,0);
//     for(char c :s1){
//         freq[c-'a']++;
//     }

//     for(char c: s1){
//         if(freq[c-'a']== 1){
//             return c;
//         }
//     }
//     return '#'; //if no character repeat
// }

// int main(){
//     string s1= "swiss";
//       char result = firstNonRepeating(s1);

//     if (result != '#')
//         cout << result;
//     else
//         cout << "No non-repeating character";
//     return 0;
// }


// void moveZeroToEnd(vector<int>& arr, int n){

//     int i =0, j= n-1;
//     while(i<j){
//         if(arr[i]!=0){
//             i++;
//         }
//         if(arr[j] == 0){
//             j--;
//         }
//         if(arr[i]== 0 && arr[j] != 0){
//            swap(arr[i], arr[j]);
//             i++;j--;
//         }
       
//     }

// }

// int main(){
//     vector<int> arr = {0,1,0,3,12,0,0,4,6,3,0,5};
//     int n = arr.size();
//     moveZeroToEnd(arr, n);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }




// void moveZeroToEnd(vector<int>& arr, int n){

//    int j =0;
//    for(int i =0; i<n; i++){
//     if(arr[i] != 0){
//         swap(arr[i],arr[j]);
//         j++;
//     }
//    }

// }

// int main(){
//     vector<int> arr = {0,1,0,3,12,0,0,4,6,3,0,5};
//     int n = arr.size();
//     moveZeroToEnd(arr, n);
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }



// int missingNumber(vector<int>& arr, int n){
//     int total = n*(n+1)/2;
//     int actual = 0;
//     for(int c:arr){
//         actual += c;
//     }
//     return total - actual;
// }

// int main(){
//     vector<int> arr = {1,2,3,5,6,7};
//     int n = 7;
//     cout<<missingNumber(arr, n);
//     return 0;
// }

// int removeDuplicates(vector<int>& arr, int n){
//     if(n==0) return 0;
//     int i=0;
//     for(int j=1; j<n ; j++){
//         if(arr[i]!= arr[j]){
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     return i+1;
// }




// int main(){
//     vector<int> arr = {1,2,2,3,4,4,5};
//     int n = arr.size();
//     cout<<removeDuplicates(arr,n);
//     return 0;
// }
// bool isPalindrome(string s1){
//     int l =0, r = s1.length()-1;
//     while(l<r){
//         if(s1[l] != s1[r]){
//             return false;
//         }
//         l++;r--;
//     }
//     return true;
// }


// int main(){
//     string s1 = "madam";
//     if(isPalindrome(s1)){
//         cout<<"Palindrome";
//     }else{
//         cout<<"Not Palindrome";
//     }
//     return 0;
// }


// int removeDuplicates(vector<int>& arr, int n){
//     unordered_set<int> s;
//     if(n==0) return 0;
//     for(int x : arr){
//         if(s.count(x)){
//             return x;
//         }
//         s.insert(x);
//     }
//     return -1; //if no duplicate found

// }
// int main(){
//     vector<int> arr = {1,2,3,3,4,5,6};
//     int n = arr.size();
//     cout<<removeDuplicates(arr,n);
//     return 0;
// }


vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2, int n1, int n2){
    vector<int> result;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i] <arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }else{
            result.push_back(arr2[j]);
            j++;
        }
    }
    return result;
}

int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {5,6,8,10,11};
    int n1 = arr1.size();
    int n2 = arr2.size();
     vector<int> answer =mergeSortedArrays(arr1, arr2, n1, n2);
     for(int x: answer){
        cout<<x<<" ";
     }
    return 0;
}
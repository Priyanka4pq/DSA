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




void moveZeroToEnd(vector<int>& arr, int n){

   int j =0;
   for(int i =0; i<n; i++){
    if(arr[i] != 0){
        swap(arr[i],arr[j]);
        j++;
    }
   }

}

int main(){
    vector<int> arr = {0,1,0,3,12,0,0,4,6,3,0,5};
    int n = arr.size();
    moveZeroToEnd(arr, n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
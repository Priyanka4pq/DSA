#include <bits/stdc++.h>
using namespace std;


bool isFreqSame(int freq1[], int freq2[]){
    for(int i =0; i<26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
class Solution{
    public:
        bool PermutationInString(string s1, string s2){
            if(s1.length() > s2.length()) return false;

            int freq[26] = {0};
            for(char c : s1){
                freq[c - 'a']++;
            }

            int windowSize = s1.length();

            for(int i =0; i+windowSize <= s2.length(); i++){
                int windFreq[26] = {0};
                for(int  j = i; j<i+windowSize ; j++){
                    windFreq[s2[j]- 'a']++;
                }
                if(isFreqSame(freq, windFreq)){
                    return true;
                }
            }
            return false;

        }

};
int main(){
    Solution obj;
    string s1 = "ab", s2 = "eidbaooo";

    cout<<obj.PermutationInString(s1, s2)<<endl;
    return 0;
}
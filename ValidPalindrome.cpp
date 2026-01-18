#include <bits/stdc++.h>
using namespace std;
    
    bool isAlphaNumeric(char ch){
        if((ch >= '0' && ch <=9) || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }

    class Solution {
        public:
            bool isPalindrome(string s){
                int st = 0, end = s.size()-1;
                while(st<end){
                    if(!isAlphaNumeric(s[st])){
                        st++;
                        continue;
                    }
                    if(!isAlphaNumeric(s[end])){
                        end--;
                        continue;
                    }
                    if(tolower(s[st]) != tolower(s[end])){
                        return false;
                    }
                    st++;
                    end--;
                }
                return true;
            }
    };
    int main(){
        Solution obj;
        string s = "A man, a plan, a canal: Panama";

        cout<<obj.isPalindrome(s)<<endl;
        return 0;
    }
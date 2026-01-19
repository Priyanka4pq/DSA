#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removeAllOccurence(string s,string part){
        while(s.length() >0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    };
};
int main(){
    Solution obj;
    string s= "daabcbaabcbc";
    string part = "abc";

    cout<<obj.removeAllOccurence(s,part)<<endl;

    return 0;
}
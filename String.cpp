#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    // char str[] = {'a','s','d','\0'};
    // char str1[] = "priyanka";  //string literals - means jiski value change nhi ho skti.
    // cout<<str<<endl;  //asr
    // cout<<str[2]<<endl;  //d
    // cout<<strlen(str)<<endl;  //give length - 5 
    // cout<<strlen(str1)<<endl; //8

    // char str[100];
    // cout<<"enter string :";
    // // cin>>str;  //cin se agr input lenge toh ye ek string ke space ke baad ki strings ko ignore kr dega. iske liye hm cin.getline( str, len, delim?) use krenge.
    // // cin.getline(str, 100, '$');  //here $ is delimeter
    // cin.getline(str, 100); 
    // // cout<<"output is : "<<str<<endl;
    // for(char ch :str){
    //     cout<<ch<<" ";   //give some garbage value also after strings cause the size of sting is 100.
    // }
    // cout<<endl;


    // char str[]= "hello priyanka";
    // int len = 0;
    // for( int i= 0; i<str[i] != '\0'; i++){
    //     len++;
    // }
    // cout<< "length of string : "<<len<<endl;


    //STRINGS------------------->it is dynamic in nature and can be resize, contiguous in nature

    // string str = "priyanka prajapati";
    // cout<<str<<endl;
    // str="hello dude";
    // cout<< str<<endl;

    // string str1="priyanka";
    // string str2="prajapati";
    // string str3 = str1+str2;  //concatenation , it is not possible in character array.
    // cout<<str3<<endl;

    // string str1="priyanka";
    // string str2="priyanka";
    // cout<<(str1 == str2)<<endl;  //it is not possible in character

    // string str1="priyanka";
    // string str2="xyz";
    // cout<<(str1 < str2)<<endl;  //based on 1st letter
    // cout<<str1.length()<<endl;

    // string str1;
    // // cin>>str1;   //stop taking input after space
    // getline(cin,str1);   //for taking input
    // cout<<"output is : "<<str1;

    // string str = "apna college.";
    // for(char ch:str){
    //     cout<<ch<<" ";
    // }



    //REVERSE A STRING

    // 1. for a character array

    // char s[] = {'h','e','l','l','o','\0'};
    // int st=0, end = strlen(s)-1;
    // while(st<end){
    //     swap(s[st++], s[end--]);
    // }
    // cout<<s<<" ";

    // 2. for a string array

    string str ="priyanka prajapati";

    reverse(str.begin(), str.end());  //iterators
    cout<<str<<endl;

    return 0;
}
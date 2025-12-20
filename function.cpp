#include <iostream>
using namespace std;

// void printHello(){
//     cout<<"Printing Hello\n";
// }
// int main(){

//     printHello();
//     printHello();
//     printHello();

//     return 0;
// }/


// int printHello(){
//     cout<<"isme return type aayega.\n";
//     return 23;
// }
// int main(){
// //    int val= printHello();
// //    cout<<val;
// // OR
// cout<<printHello()<<endl;
//     return 0;
// }


// int calculateSum(int a,int b){
//     int s =a+b;
//     return s;
// }
// int main(){
//     cout<<calculateSum(10,5)<<endl;
//     return 0;
// }



//minimum of two number

// int minNumber(int a , int b){
//     if(a>b){
//         return b;
//     }else{
//         return a;
//     }
// }
// int main(){
//    cout<<"Minimum number is : "<<minNumber(12,23)<<endl;
//     return 0;
// }


// int nNumSum(int a){
//     int sum=0;
//     for(int i=1;i<=a;i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     cout<<nNumSum(3)<<endl;
//     cout<<nNumSum(33)<<endl;
//     return 0;
// }



// Q: Calculate N factorial

// int nFactorial(int n){
// int fact = 1;
// for(int i=1;i<=n;i++){
//     fact*=i;
// }
// return fact;
// }
// int main(){
//     cout<<nFactorial(4)<<endl;
//     cout<<nFactorial(3)<<endl;
//     cout<<nFactorial(5)<<endl;
//     cout<<nFactorial(6)<<endl;
//     return 0;
// }




//PASS BY VALUE

// int sum(int x,int y){
//     x=x+10;
//     y=y+1;
//     return x+y;    //sum will be 20 instead of 9 , but original value of x and y will not change.
// }

// int main(){
//     int a=5, b=4;
//     cout<<sum(a,b)<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     return 0;
// }


// void change(int x){
//     x=x*3;
//     cout<<"x = "<<x<<endl;   //this value will be changed.
// }
// int main(){
//     int x=5;
//     change(x);
//     cout<<"x = "<<x<<endl; //but this value will not change.
//     return 0;
// }


// Q: Calculate sum of digits of a number.

// int sumOfDigits(int num){
//     int lastDigit;
//     int digitSum=0;
//     while(num>0){
//         lastDigit=num%10;
//         num=num/10;
//         digitSum+=lastDigit;
//     }
//     return digitSum;
// }
// int main(){
//     cout<<sumOfDigits(1234)<<endl;
//     return 0;
// }


// Q: Calculate nCr binomial coefficient for n and r.

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int n=8,r=2;
    cout<<nCr(n,r)<<endl;

    return 0;
}
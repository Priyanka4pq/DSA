#include <iostream>
using namespace std;

int main(){
    // cout << "iooooo jho vapple\n from priyanka world";
    // cout <<"hello dude";
    // cout <<"hello"<<"priyanka";

    // int age =25;
    // char grade= 'A';
    // float PI= 3.14f;
    // bool isSafe = true;
    // double salary = 214.89;
    // cout << "my age is "<<age <<"my grade is "<<grade << "and"<<PI <<"is it safe"<<isSafe<<"and my salary is"<<salary;


    // char grade='A';
    // int value = grade;
    // cout<<value<<endl;    //it is implicit process, compiler krta hai.

    // double price = 234.45;
    // int newPrice = (int)price;
    // cout << newPrice << endl;  //it is explicit process, programmer krta hai.

    // int age;
    // cout <<age;  //garbage value print hogi, jb hm variable ko koi value assign nhi krenge tb.

    // int age;
    // cout << "Enter the age : ";
    // cin >> age;
    // cout<<"your age is : "<<age<<endl;


    //ARITHEMATIC OPERATOR
    // int a=5, b=10;
    // int sum= a+b;
    // int mul= a*b;
    // int div= b/a;
    // int module= b%a;
    // cout<<"sum is : "<<sum<<endl;
    // cout<<"multiplication is : "<<mul<<endl;
    // cout<<"division is : "<<div<<endl;
    // cout<<"module is : "<<module<<endl;

    // agr hme pura division chahiye toh
    // int a=5;
    // double b=2;
    // cout<<"division is : "<<a/b;
    // or by type casting
    // cout << (5/double(2));
    
    // REALTIONAL OPERATOR
    // cout<<(3<5)<<endl;  //true->1
    // cout<<(7<5)<<endl;   //false->0
    // cout<<(7<=7)<<endl;   
    // cout<<(7!=17)<<endl; 
    
    // LOGICAL OPERATOR
    // cout<<!(7!=17)<<endl;   
    // cout<<!(3>1)<<endl;   

    // cout <<((3<1) || (3>2))<<endl;  //true- one is true
    // cout <<((3<1) && (3>2));  //false- both must be true
   
    // Q:1- Sum of two numbers-
    // int a=7;
    // int b=5;
    // int sum = a+b;
    // cout <<"Sum of two numbers is: "<<sum<<endl;

    // USER'S INPUT-
    // int a,b;
    // cout<<"Enter a\n";
    // cin>>a;
    // cout << "Enter b\n";
    // cin>>b;

    // int sum;
    // cout<<"Sum of two numbers is : "<<sum;

    // UNARY OPERATOR---INCREMENT AND DECREMENT

    // int a =10;
    // int b = a++; //first kaam, then update
    // cout << b<<endl;  //b=10
    // cout << a <<endl;   //a =11

    // int a= 10;
    // int b=++a; 
    // cout<<b<<endl;  //b=11
    // cout<<a<<endl;  //a =11


    // int a= 10;
    // int b = --a;
    // cout<<b<<endl;  
    // cout<<a<<endl;

    // int a= 10;
    // int b = a--;
    // cout<<b<<endl;  
    // cout<<a<<endl;

    // int n=45;
    // if(n>=0){
    //     cout<<"positive number";
    // }else{
    //     cout<<"negative";
    // }


    // int age;
    // cout<<"enter your age : \n";
    // cin>>age;
    // if(age>=18){
    //     cout<<"You are eligible to vote";
    // }else{
    //     cout<<"You are not eligible to vote";
    // }


    // int a;
    // cout<<"Enter value of a : "<<endl;
    // cin>>a;
    // if(a%2==0){
    //     cout<<"Even number";
    // }else{
    //     cout<<"Odd number";
    // }


    // int marks;
    // cout<<"Enter marks"<<endl;
    // cin>>marks;
    // if(marks>90){
    //     cout<<"Grade A";
    // }else if(marks>=80){
    //     cout<<"Grade B";
    // }else{
    //     cout<<"Grade C";
    // }


    // char ch;
    // cout<<"Enter character"<<endl;
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"LowerCase";
    // }else{
    //     cout<<"UpperCase";
    // }

    // char ch;
    // cout<<"Enter character"<<endl;
    // cin>>ch;
    // if(ch>=65 && ch<=90){
    //     cout<<"UpperCase";
    // }else{
    //     cout<<"LowerCase";
    // }


    //TERNARY OPERATOR
    // int n=89;
    // cout<<(n>=0?"Positive":"Negative")<<endl;

    //LOOP

    // int i=1;

    // while (i<=20)
    // {
    //     // cout<<"Count is : "<<i<<endl;
    //     cout<<i;
    //     i++;
    // }
    // cout<<endl;
    

    // int i;
    // cout<<"Enter the number : ";
    // cin>>i;
    // while(i<=78){
    //     cout<<i<<" ";
    //     i++;
    // }


    // FOR LOOP

    // for(int i=1;i<=6;i++){
    //     cout<<i<<" ";
    // }

    // int i;
    // int n;
    // cout<<"Enter i"<<endl;
    // cin>>n;
    // // for(i=n;i<10;i=i+2){
    // for(i=n;i<10;i++){
    //     cout<<i<<" ";
    // }

    // Q: Sum of numbers from 1 to n
    // int n;
    // int sum=0;
    // cout<<"Enter n :\n";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     sum+=i;
    //     if(i==5){
    //         break;
    //     }
    // }
    // cout<<sum<<" ";


    // Q: Sum of all Odd numbers from 1 to N

    // int n =5;
    // int i;
    // int sum=0;
    // for(i=1;i<=n;i++){
    //     if(i%2!=0){
    //         // sum=sum+i;
    //         sum +=i;
    //     }
    // }
    // cout<<"Sum of Odd numbers is : "<<sum;


    //using while loop
    // int n=5;
    // int oddSum=0;
    // int i=1;
    // while(i<=5){
    //     if(i%2!=0){
    //         oddSum+=i;
    //     }
    //     i++;
    // }
    // cout<<"Sum of Odd numbers : "<<oddSum<<endl;


    // int n=10;
    // int i=1;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<=10);

    // Q: Check if a number is prime or not.

    // int n=7;
    // int i;
    // bool isPrime= true;
    // // for(i=2;i<=n-1;i++){
    // for(i=2;i*i<=n;i++){
    //     if(n%i==0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime == true){
    //     cout<<"prime no.\n";
    // }else{
    //     cout<<" Not a Prime no.";
    // }

    // int n=10;
    // for (int i=1; i<=n ; i++){
    //     int m= 10;
    //     for(int j =1;j<=m;j++){
    //         cout<<"X";
    //     }
    //     cout<<endl;
    // }


    // for(int i=1;i<=4;i++){   //outer
    //     for(int j=1;j<=4;j++){  //inner
    //         cout<<"*"<<" ";
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //  for(int i=0;i<4;i++){   //outer
    //     for(int j=0;j<4;j++){  //inner
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
 
    // int n=8;
    // for( int i=0;i<n;i++){
    //     char ch ='A';
    //     for( int j=0;j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // int n=3;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    // int n=3;
    // char ch='A';
    // for(int i=0;i<=n-1;i++){
    //     for(int j=0;j<=n-1;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // int n=4;
    // for(int i=0;i<n;i++){
    //     // for(int j=i+1;j<=n;j++){   //stars decrease(1,2,3)
    //     for(int j=0;j<i+1;j++){     //stars increase(n,n-1)
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }



    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=0;i<n;i++){
    //     char ch='A'+i;
    //     for(int j=0; j<=i;j++){
    //         cout<<ch<<" ";
            
    //     }
    //     cout<<endl;
    // }


    // int n=5;
    // char ch='A';
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }


    // int n=4;
    // for(int i=0;i<n;i++){
    //     int num =1;
    //     for(int j=0;j<i+1;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }



    
    return 0;
}
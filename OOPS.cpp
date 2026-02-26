#include <bits/stdc++.h>
using namespace std;

// class Teacher{
//     public:
//      string name;
//      int age;
//      string subject;
//      double salary;

//      void changeDept(string newDept){
//         subject = newDept;
//      }
// };
// int main(){
//     Teacher t1;
//     t1.name = "Priyanka";
//     t1.age = 22;
//     t1.subject = "Maths";
//     t1.salary = 50000;
//     cout<<t1.name<<" "<<t1.age<<" "<<t1.subject<<" "<<t1.salary<<endl;
//     return 0;
// }

// class Teacher{
//     private:
//         double salary;
//     public:
//         string name;
//         int age;
//         string subject;
   
//     void changeDept(string newDept){
//         subject = newDept;
//     }

//     //setter for salary
//     void setSalary(double s){
//         salary = s;
//     }

//     //getter for salary
//     double getSalary(){
//         return salary;
//     }
// };
// int main(){
//     Teacher t1;
//     t1.name = "Priyanka";
//     t1.age = 22;
//     t1.subject = "Maths";
//     t1.setSalary(50000);
//     cout<<t1.name<<" "<<t1.age<<" "<<t1.subject<<" "<<t1.getSalary()<<endl;
//     return 0;
// }


// calculate factorial
// class Factorial{
// private:
//     int nums;   //data hiding
    
// public:
//     void inputNumber(){
//         cout<<"Enter a number: ";
//         cin>>nums;
//     }
//     int calculateFactorial(){
//         long long fact = 1;
//         for(int i = 1; i<=nums; i++){
//             fact *= i;
//         }
//         cout<<"factorial is: "<<fact<<endl;
//     }
// };
// int main(){
//     Factorial factCalc;
//     factCalc.inputNumber();
//     factCalc.calculateFactorial();
//     return 0;
// }


// class student{
// public:
//     char name[10];
//     int age;
//     void get();
//     void put();
// };
// void student::get(){
//     cout<<"Enter name and age : ";
//     cin>>name>>age;
// }
// void student::put(){
//     cout<<"Name is : "<<name<<" and Age is : "<<age<<endl;
// }
// int main(){
//     student s;
//     s.get();
//     s.put();
//     return 0;
// }




//CONSTRUCTOR------------->
// class constructor1{
// public:
//     constructor1(){
//         cout<<"Constructor created.";
//     }
// };
// int main(){
//     constructor1 ob;
//     return 0;
// }


//default constructor
// class calcArea{
// public:
//     int l, b, area;
//     calcArea(){
//         cout<<"Enter length and  breadth "<<endl;
//         cin>>l>>b;
//     }
//     void show(){
//         area = l*b;
//         cout<<"area is : "<<area;
//     }
// };
// int main(){
//     calcArea area;
//     area.show();
//     return 0;
// }


//PARAMETRISED CONSTRUCTOR
// class area
// {
// public:
//     area(int l, int b){
//         int ar = l*b;
//         cout<<"area is : "<<ar<<endl;
//     }
// };
// int main(){
//     area ob(3,4);
//     return 0;
// }


class Teacher{
public:
    string name;
    int age; 
    string dept;
    Teacher(string n, int a, string d){
        name = n;
        age = a;
        dept = d;
    }
    void getInfo(){
        cout<<"name is : "<<name;
        cout<<"\nage is : "<<age;
    }
};
int main(){
    Teacher t1("priyanka",22,"computer science");
    t1.getInfo();
    return 0;
}
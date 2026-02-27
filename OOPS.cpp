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


// class Teacher{
// public:
//     string name;
//     int age; 
//     string dept;
//     Teacher(string n, int a, string d){
//         name = n;
//         age = a;
//         dept = d;
//     }
//     void getInfo(){
//         cout<<"name is : "<<name;
//         cout<<"\nage is : "<<age;
//     }
// };
// int main(){
//     Teacher t1("priyanka",22,"computer science");
//     t1.getInfo();
//     return 0;
// }


//constructor overloading--- is a feature that allows a class to have more than one constructor with different sets of parameters.

// class Volume{
//     public:
//         int l, b, h, vol;
//         //default constructor
//         Volume(){
//             l = 0;
//             b = 0;
//             h = 0;
//             vol = l * b * h;
//             cout<<"Volume is : "<<vol<<endl;
//         }

//         //parameterized constructor
//         Volume(int x, int y, int z){
//             l = x;
//             b = y;
//             h = z;
//             vol = l * b * h;
//             cout<<"Volume is : "<<vol<<endl;
//         }

//         //copy constructor
//         Volume( Volume &c){
//             l = c.l;
//             b = c.b;
//             h = c.h;
//             vol = l * b * h;
//             cout<<"Volume is : "<<vol<<endl;
//         }
// };
// int main(){
//     Volume p;
//     Volume p1(2,3,4);
//     Volume p2(p1);
//     return 0;
// }


//THIS POINTER
// class Volume{
//     public:
//         int l, b, h, vol;
//         //default constructor
//         Volume(){
//             l = 0;
//             b = 0;
//             h = 0;
//             vol = l * b * h;
//             cout<<"Volume is : "<<vol<<endl;
//         }

//         //parameterized constructor
//         Volume(int l, int b, int h){
//             this->l = l;
//             this->b = b;
//             this->h = h;
//             vol = l * b * h;
//             cout<<"Volume is : "<<vol<<endl;
//         }
        
//         //copy constructor
//         Volume( Volume &c){
//             cout<<"I am custom copy constructor"<<endl;
//             l = c.l;
//             b = c.b;
//             h = c.h;
//             vol = l * b * h;
//             cout<<"Volume is : "<<vol<<endl;
//         }
// };
// int main(){
//     Volume p;
//     Volume p1(2,3,4);
//     Volume p2(p1);
//     return 0;
// }




//DEEP AND SHALLOW COPY
// class Student
// {
// public:
//     string name;
//     double *cgpaptr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaptr = new double;   //new memory assign krna
//         *cgpaptr = cgpa;
//     }
//     Student(Student &obj){
//         this->name = obj.name;
//         cgpaptr = new double;
//         *cgpaptr = *(obj.cgpaptr);
//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"cgpa : "<<*cgpaptr<<endl;
//     }
// };
// int main(){
//     Student s1("Rahul kumar", 8.9);
//     Student s2(s1);
//     s1.getInfo();
//     *(s2.cgpaptr) = 9.3;
//     s1.getInfo();

//     s2.name = "neha";
//     s2.getInfo();
//     return 0;
// }



//DESTRUCTOR

// class Student
// {
// public:
//     string name;
//     double *cgpaptr;

//     Student(string name, double cgpa){
//         this->name = name;
//         cgpaptr = new double;   //new memory assign krna
//         *cgpaptr = cgpa;
//     }
//     ~Student(){
//         cout<<"I  am a destructor"<<endl;
//         delete cgpaptr;
//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"cgpa : "<<*cgpaptr<<endl;
//     }
// };
// int main(){
//     Student s1("Rahul kumar", 8.9);
//     s1.getInfo();
//     return 0;
// }




//--> INHERITANCE

// 1. Single inheritance

// class Person{
// public:
//     string name;
//     int age;
//     Person(string name, int age){
//         this->name = name;
//         this->age = age;
        
//     }
//     // Person(){
//     //     cout<<"this is parent constructor"<<endl;
//     // }
// };
// class Students : public Person{
// public:
//     int roll_no;
//     Students(string name, int age, int roll_no): Person( name,age){
//         cout<<"child constructor"<<endl;
//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl; 
//         cout<<"age : "<<age<<endl; 
//         cout<<"roll no. : "<<roll_no<<endl; 
//     }

// };
// int main(){
//     Students s1("Priyanka", 22,79);
//     s1.getInfo();
//     return 0;
// }


// 2. Multilevel Inheritance

class Person
{
public:
    string name;
    int age;

};
class Student: public Person{
public:
    int roll_no;



};
class GradStudent: public Student{
public:
    string researchArea;

};
int main(){
    GradStudent g1;
    g1.name = "Priyanka";
    g1.researchArea = "quantum Physics";
    cout<<g1.name<<endl;
    cout<<g1.researchArea<<endl;
    return 0;
}

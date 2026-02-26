#include <bits/stdc++.h>
using namespace std;

class Teacher{
    public:
     string name;
     int age;
     string subject;
     double salary;

     void changeDept(string newDept){
        subject = newDept;
     }
};
int main(){
    Teacher t1;
    t1.name = "Priyanka";
    t1.age = 22;
    t1.subject = "Maths";
    t1.salary = 50000;
    cout<<t1.name<<" "<<t1.age<<" "<<t1.subject<<" "<<t1.salary<<endl;
    return 0;
}
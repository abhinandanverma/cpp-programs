#include<iostream>
using namespace std;
class teacher
{
 //Propertes
 public:
 string name;
 string dept;
 string subject;
 float salary;
 //Methoed
 void changeDept(string newdept)
 {
    dept =newdept;

 }

};
int main() {
 teacher t1;
    t1.name ="Abhinandan";
    t1.dept="computer science";
    t1.subject="c++";
    t1.salary=25000;
    cout<<"name: "<<t1.name<<" dept: "<<t1.dept<<" slaary: "<<t1.salary<<" subject: "<<t1.subject<<endl;
    return 0;

}
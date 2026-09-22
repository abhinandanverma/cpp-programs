#include<iostream>
using namespace std;
class teacher
{
 //Propertes
 private:
 float salary;
 public:
 string name;
 string dept;
 string subject;
 //Methoed
 void changeDept(string newdept)
 {
    dept =newdept;

 }
 
 
 //setter this is work for a private value ko set karna 
 void setsalary(float salary){
    this->salary=salary;
 
 }
//  getter  this is work for a private value ko get karne ke liye
 float getsalary()
 {
    return salary;
 }

};
int main() {
 teacher t1;
    t1.name ="Abhinandan";
    t1.dept="computer science";
    t1.subject="c++";
    t1.setsalary(25000);
    cout<<"name: "<<t1.name<<" dept: "<<t1.dept<<" slaary: "<<" subject: "<<t1.subject<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;

}


#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollNo;
};
class Teacher
{
    public:
    string subject;
    double salary;
};
class TA :public student,public Teacher
{   //this class is the copy vlaue of other class
    public:
    string resArea;
    void display()
    {
        cout<<name<<" "<<rollNo<<" "<<subject<<" "<<salary<<" "<<resArea<<endl;
    }
};
int main()
 {
    TA t1;
    t1.name ="Arpit Gupta";
    t1.rollNo=12;
    t1.subject="c++";
    t1.salary=25000;
    t1.resArea="Lucknow";

    t1.display();
}
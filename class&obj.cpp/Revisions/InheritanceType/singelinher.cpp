#include<iostream>
using namespace std;
class Person{
public:
    string name;
    void showName(){
        cout<<" Name = " << name <<endl;
    }
};
class Student:public Person{
public:
    int rollNo;
    void showRollNo(){
        cout<< " Rollno = " << rollNo <<endl;
    }
};
int main(){
    Student s1;
    s1.name="Abhinandan";
    s1.rollNo=101;

    s1.showName();
    s1.showRollNo();
}
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    double cgpa;
    student(string name,double cgpa)
    {
        this->name=name;
        this->cgpa=cgpa;
    }
    void display(){
        cout<< " name : " << name << " cgpa : " << cgpa <<endl;
    }
};
int main(){
    student s1("Arpit",9.9);
    s1.display();
    student s2("Abhinandna",9.1);
    student s3(s2);
    s3.display(); //this is tha copy constru
    s2.display();
}
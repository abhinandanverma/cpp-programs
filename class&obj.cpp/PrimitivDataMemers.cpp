#include<iostream>
using namespace std;
class Student // this is the class define
{
    public:
        int roll;
        float marks; 
    void display()
    {
        cout << "Roll number: " << roll << endl;
        cout << "Marks : " << marks <<endl;
    }
};
int main()
{
    Student s1; //s1 is the object define.
    s1.roll=03;// value assign karega.
    s1.marks=9.9;// value assign karega.

    s1.display(); //member function
}
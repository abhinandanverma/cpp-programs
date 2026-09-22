#include<iostream>
using namespace std;
class Student
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
    Student s1;
    s1.roll=03;
    s1.marks=9.9;

    s1.display();
}
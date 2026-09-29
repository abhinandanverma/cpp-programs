#include<iostream>
using namespace std;
class Student
{
    public:
    int marks;
    Student(int marks){
        this->marks=marks;
    }
    void display()
    {
        cout<< "Yeor marks: "<<marks;
    }
};
int main()
{
  Student s1(99);
  s1.display();
}
#include<iostream>
using namespace std;
class Student
{
    public:
    int marks;
};
int main()
{
    Student s1;
    Student *p;
    p = &s1;
    p->marks =90;
    cout<< "pointer value: " <<p ->marks;
    return 0;
}
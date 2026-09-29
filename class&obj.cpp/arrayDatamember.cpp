#include<iostream>
using namespace std;
class Student
{
public:
    int marks[3];
};
int main()
{
    Student s1;
    s1.marks[0]=80;
    s1.marks[1]=90;
    s1.marks[2]=89;
    cout<< s1.marks[0]<<" ";
        cout<< s1.marks[1]<<" ";
            cout<< s1.marks[2]<<" ";
}
#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    student(int marks){
        this->marks = marks;
    }
    student(const student &s)
    {
        marks = s.marks;
    }
};
int main()
{
    student s1(90);

    student s2(s1);//copy consttructor

    cout << s2.marks;
}
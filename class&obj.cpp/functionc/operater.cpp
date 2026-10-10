#include <iostream>
using namespace std;

class Student
{
public:
    int marks;

    // Constructor
    Student(int marks)
    {
         this->marks = marks; //using aa this key word
    }

    // + operator overload
    Student operator+(Student s)
    {
        Student temp(0);

        temp.marks = marks + s.marks;

        return temp;
    }
};

int main()
{
    // Create two objects
    Student s1(80);
    Student s2(90);

    // Using + operator with objects
    Student s3 = s1 + s2;
    cout << "Total Marks = " << s3.marks << endl;
    
    
    Student s4 = s1 + s2;
    cout << "Total Marks = " << s4.marks << endl;
  
    return 0;
}
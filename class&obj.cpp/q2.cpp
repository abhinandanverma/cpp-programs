#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor is called" << endl;
    }

    ~Student()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Student s1;

    return 0;
}
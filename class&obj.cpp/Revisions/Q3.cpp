#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Abhinandan";

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

class Result : public Student
{
public:
    int marks = 85;

    void showMarks()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.showName();
    r.showMarks();

    return 0;
}
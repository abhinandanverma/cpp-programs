// Private Data
//      ↓
// Friend Function
//      ↓
// Access Allowed ✅


#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;

public:
    // Friend function declaration
    friend void showMarks(Student s);
};

// Friend function
void showMarks(Student s)
{
    // Accessing private data
    cout << "Marks = " << s.marks << endl;
}

int main()
{
    Student s;

    // Calling friend function
    showMarks(s);

    return 0;
}
#include <iostream>
using namespace std;

// Class
class Student
{
private:
    int marks;   // Private data

public:
    // Function to set marks
    void setMarks(int m)
    {
        marks = m;
    }

    // Function to display marks
    void showMarks()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    // Create object
    Student s;

    // Set marks
    s.setMarks(80);
    s.setMarks(90);

    // Display marks
    s.showMarks();
    s.showMarks();

    return 0;
}
#include <iostream>
using namespace std;

class Student
{
public:
    // Static data member
    static int count;

    // Static function
    static void showCount()
    {
        cout << "Number of Students = " << count << endl;
    }
};

// Initialize static variable
int Student::count = 3;

int main()
{
    // Call static function using class name
    Student::showCount();

    return 0;
}
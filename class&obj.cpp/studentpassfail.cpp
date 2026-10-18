
#include <iostream>
using namespace std;

// Student class
class Student {
public:
    int marks;

    // Result check karne ka function
    void result() {
        cout << "Enter your marks: ";
        cin >> marks;

        if (marks >= 33) {
            cout << "Student is Pass";
        } else {
            cout << "Student is Fail";
        }
    }
};

int main() {
    // Object banaya
    Student s1;

    // Function call kiya
    s1.result();

    return 0;
}

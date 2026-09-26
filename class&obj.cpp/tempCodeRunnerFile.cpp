#include<iostream>
using namespace std;

class Student {
    public:
        int roll;          // har object ka alag roll
        static int count;  // sab object ke liye 1 hi count
    
        Student() {
            roll = ++count;  // naya object bane to count badh jaye
        }
        
        void show() {
            cout << "Roll: " << roll << " Total Students: " << count << endl;
        }
};

// static ko class ke bahar 0 se initialize karna zaroori hai
int Student::count = 0;

int main() {
    Student s1;  // count = 1
    Student s2;  // count = 2
    Student s3;  // count = 3

    s1.show();
    s2.show();
    s3.show();
    
    return 0;
}


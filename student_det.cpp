#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;   // Creat an object

    s1.name = "Rahul";
    s1.age = 20;

    s1.display();

    return 0;
}

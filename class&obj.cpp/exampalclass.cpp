#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    void display(){
        cout<< " Name: " <<name <<endl;
        cout<< " RollNo: " <<rollno <<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Abhi";
    s1.rollno = 12;
    s1.display();
}
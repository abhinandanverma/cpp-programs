#include<iostream>
using namespace std;
class Student{
public:
    int Rollno;
Student(){
    Rollno =103;
    cout<< "Constructor is called" <<endl;
}
void display(){
        cout<< " RollNo is: "<<Rollno<<endl;

}
};
int main(){
    Student s1;
    s1.display();

}
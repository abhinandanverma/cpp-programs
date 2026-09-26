#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    Student(string name,int age){
        this ->name = name;
        this ->age = age;
    }
    void display(){
        cout<< " name " << name <<endl;
        cout << " age " << age  <<endl;
    }
};
int main()
{
    Student s1("Abhinandna", 19);
    s1.display();

}

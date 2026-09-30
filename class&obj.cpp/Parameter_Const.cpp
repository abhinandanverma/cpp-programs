#include<iostream>
using namespace std;
class Student // this is the class name 
{
    public:
    string name;
    int age;
    Student(string name,int age)// constructor ne name  aur age  ko cakue de di 
    {
        this ->name = name; //Abhinandan name me ga hai.

        this ->age = age; // 19 age me gaya hai.
    }
    void display(){
        cout<< " name: " << name <<endl;
        cout << " age: " << age  <<endl;
    }
};
int main()
{
     //  s1  object bana .
    Student s1("Abhinandna", 19);
    s1.display();

}

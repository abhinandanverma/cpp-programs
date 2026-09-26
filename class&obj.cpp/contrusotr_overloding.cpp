#include<iostream>
using namespace std;
class Student
{
    public:
    Student ()//Constructr 1: no perameter.
    {
        cout<<"this is the defalt constr" <<endl;
    }
    
    Student(string name) //Constructr 1: one permeter.
    {
        cout<< " Name: " << name << endl;
    }
    Student(string name, int age) //Constructr 3: two permeter.
    {
        cout << " Name: " << name <<endl;
        cout << " Age: " << age <<endl;
    }
};
int main()
{
    Student s1;                   // Constructor 1
    Student s2("Abhinandan");    //Constortruc 2
    Student s3("Abhinandan",19); //Constortruc 3
}

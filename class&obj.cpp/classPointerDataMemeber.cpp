#include<iostream>
using namespace std;
class student 
{
    public :
    int *marks; // pointr dat member
    student()
    {
        marks = new int; //dunamic memory allocation
    }
    void input()//input member function
    {
        cout<<"Enter marks: ";
        cin>>*marks;
    }
    void display(){
        cout<< "marks = "<<*marks; //Dereference operator (*)
    }
};
int main()
{
    student s1; // s1 is the object
    s1.input();// calling function
    s1.display(); // callin member function
}
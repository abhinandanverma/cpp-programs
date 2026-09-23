#include<iostream>
using namespace std;
class student 
{
    public :
    int *marks;
    student()
    {
        marks = new int;
    }
    void input()
    {
        cout<<"Enter marks: ";
        cin>>*marks;
    }
    void display(){
        cout<< "marks = "<<*marks;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
}
#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    void input()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
    }
    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nagr: "<<age;
    }
    
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    
}
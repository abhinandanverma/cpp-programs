#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    int marks;
    void input()
    {
        cout<<"enter Roll: ";
        cin>>roll;
        cout<<"enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<< " RollNO: " << roll <<endl;
        cout<< " Marks: " << marks <<endl;
    }
};
int main()
{
    student s[2];  //array od object
    for (int i= 0; i< 2;i++)
    {
        s[i].input();
    }
    cout << "student  details:"<<endl;
    for (int i = 0; i < 2;i++)
    {
        s[i].display();
    }
}
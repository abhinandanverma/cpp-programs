#include<iostream>
using namespace std;
class student
{
    public:
       int marks[5]; ///Array as data member
       void input() // input function
    {
        cout<<"Enter 5 marks: "<<endl;
        for(int i = 0;i<5;i++)
        {
            cin >> marks[i];
        }
    }
    void display() //display function
    {
        cout <<"Stuent marks : ";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    // return 0;
}
#include<iostream>
using namespace std;
class student
{
public:
    string name;
    void display()
    {
        cout<< "Nmae: " <<name;
    }

};
int main()
{
    student s1;
    s1.name = "Abhiandan";
    s1.display();
}

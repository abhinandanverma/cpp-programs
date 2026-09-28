#include<iostream>
using namespace std;
class student
{ 
public:
    string name;
    int phone;
    void display()
    {
        cout<<"Nmae; " <<name <<endl;
        cout<<"Phone: " <<phone <<endl;
    }
};
int main()
{
    student s;
    s.name = "Abhinamdam";
    s.phone = 800812344;
    s.display();
}

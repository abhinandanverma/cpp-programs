#include<iostream>
using namespace std;
class child {
    public:
    string name;
    int age;
    void display()
    {
        cout << " Name: " << name  << " Age: " << age <<endl;
    }
};
int main()
{
    child c1;
    c1.name="Abhinandan";
    c1.age = 19;
    c1.display();
    return 0;
}

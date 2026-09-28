#include<iostream>
using namespace std;
class A
{
public:
    void showA()
    {
        cout<< "This is Base class";
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "This is Derived class";
    }
};
int main()
{
    B obj;
    obj.showA();
    obj.showB();

}
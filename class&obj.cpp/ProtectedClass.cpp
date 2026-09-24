#include<iostream>
using namespace std;
class Parent{
    protected:
       int age =50;
};
class child: public Parent{
    public:
       void deisplay(){
        cout<< " Age is: "<< age <<endl;

       }
};
int main()
{
    child c1;
    c1.deisplay();
}
#include<iostream>
using namespace std;
class Abhinandan
{
    public:
    virtual int show()
    {
        cout<<"This is Abhinandan class";
    }
};

class Verma: public Abhinandan
{
    public:
    int show()
    {
        cout<<"This is Verma class";
    }
};    
int main()
{
Abhinandan*ptr;
Verma obj;
ptr =&obj;
ptr ->show();

}
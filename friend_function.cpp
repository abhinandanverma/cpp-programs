#include<iostream>
using namespace std;
class Abhinandan
{
    int x=10;
    public:
    friend int show(Abhinandan obj);
};
int show(Abhinandan obj)
{
    cout<< "value ="<<obj.x;
}
int main()
{
    Abhinandan a;
    show(a);
    // return 0;
}
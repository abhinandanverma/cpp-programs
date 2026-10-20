#include<iostream>
using namespace std;
class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
void display()
{
    // cout<<a<<endl; this is the private class mamber
    // cout<<b<<endl; this is the protected class member
    cout<<c<<endl;
}
};
int main()
{
    human num;
    // num.a =10;this is the private class mamber
    // num.b =10;this is the protected class member

    num.c =10;
    num.display();

}
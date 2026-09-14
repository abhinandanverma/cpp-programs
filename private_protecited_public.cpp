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
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
};
int main()
{
    human num;
    // num.a =10;
    // num.b =10;
    num.c =10;
    num.display();

}
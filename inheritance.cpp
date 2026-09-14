//     private:
//     protected:           inheritance
//     public:



#include<iostream>
using namespace std;
class student
{
    private:
    int a;
    protected:
    int b;
    public:
    string name;
    int age;
    int weight;
    void fun (string n,int a, int w)
    {
        name=n;
        age =a;
        weight=w;
    }
void display()
{
    // cout<<a<<endl; this is the private class mamber
    // cout<<b<<endl; this is the protected class member
    cout<<"name: "<<name<<" "<<"age: " <<age<<" "<<"weight: "<<weight<<endl;
}
};
int main()
{
    student num;
    // num.a =10;this is the private class mamber
    // num.b =10;this is the protected class member
    num.fun("Abhinandan",19,70);
    num.display();

}
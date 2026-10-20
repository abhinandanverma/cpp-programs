#include<iostream>
using namespace std;
class  Animal
{
    public:
     virtual void speak() //virtualkey word
        {
            cout<<"HuHu\n";
        }

};
class Dog:public Animal
{
    public:
    void speak()
    {
        cout <<"Bark\n";
    }
};
int main()
{
    Animal *p;
    p = new Dog();
    p -> speak();
    

}
#include<iostream>
using namespace std;
class Dog{
public:
    void sound(){
        cout<< "Animal make a sound"<<endl;
    }
};
class Animal: public Dog{
public:
    void bark(){
        cout<< "Dog is bark"<<endl;
    }
};
int main(){
    Dog d;
    d.sound();
    Animal a;
    a.bark();
}
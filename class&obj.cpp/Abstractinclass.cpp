#include<iostream>
using namespace std;
class Animal{
public:
    virtual void sound(){ //Pure virtual function
    cout <<"Animal is making sound" <<endl;
    }
};
class Dog : public Animal{
public:
    void sound() override{
        cout <<"Dog: Baerk Bark"<<endl;
    }
};

int main(){
    Dog d;//Error: Cannot create object
    d.sound();
    Animal a;
    a.sound();

    return 0;

}
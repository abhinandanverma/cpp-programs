#include<iostream>
using namespace std;
class Animal{
public:
    void cat(){
        cout<< "Animal is eating" <<endl;
    }
};
class Dog :public Animal{
public:
    void bark(){
        cout<< "Dog is barking" <<endl;
    }
};
int main(){
    Dog d;
    d.bark();
    d.cat();

    return 0;

}
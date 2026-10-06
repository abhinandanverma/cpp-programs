#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:
    // Overriding function
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    // Dog object
    Dog d;

    // Base class pointer
    Animal *ptr;

    // Pointer stores address of Dog object
    ptr = &d;

    // Calls Dog's sound() at runtime
    ptr->sound();

    return 0;
}
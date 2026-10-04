#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:
    // Overriding the sound() function
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    // Create object of Dog
    Dog d;

    // Calls Dog's sound() function
    d.sound();

    return 0;
}
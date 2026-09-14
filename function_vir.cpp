
// __________________________________virtual funation___________________
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks";
    }
};

int main() {
    Animal *a;
    Dog d;

    a = &d;

    a->sound();

    return 0;
}
// ____________________________with out virtualfunation______________________

#include <iostream>
using namespace std;

class Animal {
public:
     void sound() {
        cout << "Animal makes a sound";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks";
    }
};

int main() {
    Animal *a;
    Dog d;

    a = &d;

    a->sound();

    return 0;
}

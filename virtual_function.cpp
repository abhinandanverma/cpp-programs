// #include<iostream>
// using namespace std;
// class Abhinandan
// {
//     public:
//     virtual int show()
//     {
//         cout<<"This is Abhinandan class";
//     }
// };

// class Verma: public Abhinandan
// {
//     public:
//     int show()
//     {
//         cout<<"This is Verma class";
//     }
// };    
// int main()
// {
// Abhinandan*ptr;
// Verma obj;
// ptr =&obj;
// ptr ->show();

// }  
  

// _____________________________________without virtual function_______________________________________-

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

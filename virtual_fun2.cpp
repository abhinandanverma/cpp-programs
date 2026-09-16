#include<iostream>
using namespace std ;
class Animal
{
    public:
    virtual void sound()
        {
            cout<<"Animal make sound";
        }
    };
    class dog: public Animal
    {
      public:
         void sound()
      {
        cout<<"Dog Barks";
      }
    };
    class cat: public Animal
    {
        public:
             void sound()
        {
            cout<<"cat Meows";
        }
    };
    int main()
    {
        Animal*p;
        dog d;
        cat c;
        p =&d;
        p->sound();
        p =&c;
        p->sound();
    
    }
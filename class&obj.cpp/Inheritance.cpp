#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
    person(){
        
    }
    
};
class student : public person {
        public:
           int roll_number;

           void display()
           {
              cout<< " name " <<name << " age " << age << " roll_number " << roll_number <<endl;
           }    
    };

    int main ()
    {
        student s1;
        s1.name="abhinandan";
        s1.age=19;
        s1.roll_number=03;
        s1.display();
        return 0;

    }
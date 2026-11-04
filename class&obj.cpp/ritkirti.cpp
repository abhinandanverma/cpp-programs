#include<iostream>
using namespace std;
class Dog{
protected:
    string name = "Toomy";

};
class petname: public Dog{
public:
    void display(){
        cout<<"Name = "<<name<<endl;
    } 
    
};
int main(){
    petname p1;
    p1.display();
}


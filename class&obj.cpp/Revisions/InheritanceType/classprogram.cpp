#include<iostream>
using namespace std;
class Car{  // car is the class 
public:
    string name;
    string name1; //this is the data member
    int speed;
    int price;
void display() //member function
{
    cout<< "car = "<<name<<endl;
    cout<< "speed = "<<speed<<endl;
    cout<< "car price = "<<price<<endl;
    cout<< "Founder name = "<<name1<<endl;

}
};
int main(){
    Car c1; // name ka object
    c1.name1 = "Raten TATA";
    c1.name = "TATA nono";
    c1.speed = 180;
    c1.price = 300000;
    c1.display(); ///function call
    return 0;
}
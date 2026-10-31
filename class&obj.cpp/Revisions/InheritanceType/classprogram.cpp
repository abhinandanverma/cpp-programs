#include<iostream>
using namespace std;
class Car{
public:
    string name;
    string name1;
    int speed;
    int price;
void display()
{
    cout<< "car = "<<name<<endl;
    cout<< "speed = "<<speed<<endl;
    cout<< "car price = "<<price<<endl;
    cout<< "Founder name = "<<name1<<endl;

}
};
int main(){
    Car c1;
    c1.name1 = "Raten TATA";
    c1.name = "TATA nono";
    c1.speed = 180;
    c1.price = 300000;
    c1.display();
    return 0;
}
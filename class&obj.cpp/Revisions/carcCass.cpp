#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seates;
};
    void display(Car c){
        cout<<c.name<<" " << c.price<<" " <<c.seates<<endl;
    }
int main(){
    Car c1;
    c1.name = "honda city";
    c1.price =600000;
    c1.seates =5;

    Car c2;
    c2.name = "BMW";
    c2.price =600000;
    c2.seates =5;
    display(c1);
    display(c2);


}
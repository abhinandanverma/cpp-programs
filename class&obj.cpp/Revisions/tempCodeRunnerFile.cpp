#include<iostream>
using namespace std;
class Car
{
    public:
    string name;
    int price;
    int seates;
};
void display(Car c)
{
    cout<<c.name<<" " << c.price<<" " <<c.seates<<endl;
}
void change( Car c){
    c.name = " Audi A8"; 
}
int main()
{
    Car c1;
    c1.name = "Honda city";
    c1.price =600000;
    c1.seates =5;

    display(c1);
    change(c1);   //pass by value
    display(c1);
    

}
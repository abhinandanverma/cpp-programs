#include <iostream>
using namespace std;
class car {
    public:
    string name;
    int price;
    int seats;
    car(string name, int price, int seats){
        this -> name = name;
        this -> price = price;
        this ->seats = seats;
    }  
};
int main(){
    car c1("BMW",4000000,5);
    car c2(c1);
    c2.name = "neno";
    cout<<c1.name<< " " <<c1.price<< " " <<c1.seats<<endl;
    cout<<c2.name<< " " <<c2.price<< " " <<c2.seats<<endl;
}
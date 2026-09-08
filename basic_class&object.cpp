#include<iostream>
using namespace std;
class car{
public:
    string name;
    int price;
    int seates;
    string type;

};
int main(){
    car c1;
    c1.name="honda city";
    c1.price=130000;
    c1.seates=5;
    c1.type="sedan";

    car c2;
    c2.name="swift";
    c2.price=60000;
    c2.seates=5;
    c2.type="hatcback";

    car c3;
    c3.name="kia";
    c3.price=120000;
    c3.seates=5;
    c3.type="suv";

    cout<<c1.name<<" "<<c1.price<<" "<<c1.seates<<" "<<c1.type<<""<<endl;
    cout<<c2.name<<" "<<c2.price<<" "<<c2.seates<<" "<<c2.type<<""<<endl;
    cout<<c3.name<<" "<<c3.price<<" "<<c3.seates<<" "<<c3.type<<""<<endl;
}

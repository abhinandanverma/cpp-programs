#include<iostream>
using namespace std;
class car{
public:
    string name;
    int price;
    int seates;
    string type;
    
    //constructors//
    car(string c,int p,int s,string t)
    {
        string c;
        int p;
        int s;
        string t;
    }

};

int main(){
    car c1("BMW",30000,5,"bmw");
    cout<<c1.name<<" "<<c1.price<<" "<<c1.seates<<" "<<c1.type<<endl;
}
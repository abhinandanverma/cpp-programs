#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    float balance;
    public:
    customer (string a, int b,float c)
    {
      name=a;
      account_number=b;
      balance=c;

    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main(){
    customer c1("Rohit",1,100);
    c1. display();
}

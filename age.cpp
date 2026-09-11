#include<iostream>
using namespace std;
class customer
{
    string name;
    int  account_number,balance;
    public:
    customer(string name, int account_number,int balance)
    {
        this->name=name;
        this->account_number=account_number;
        this->account_number=balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{ 
    // customer A1 A2();
    customer A1("Rohit",12,2000);
    customer A2("mohan",13,3000);
    A1.display();
    A2.display();
}
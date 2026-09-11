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
        this->balance=balance;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{ 
    customer A1("Rohit",12,1000);
    customer A2("mohan",13,300);
    A1.display();
    A2.display();
}
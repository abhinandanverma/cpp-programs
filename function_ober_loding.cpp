#include<iostream>
using namespace std;
class costomer
{
    string name;
    float account_number;
    float balance;

    public:
    
    costomer()                         //dofault constructor
    {
        name="Abhinandan";
        account_number=59180358121;
        balance=20000;
    }
    costomer(string a, float b, float c)//paramiter constructor
    {
        name=a;
        account_number=b;
        balance=c;
    }
    costomer(string a,long long b)    // constructor overloding
    {
        name = a;
        account_number=b;
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main()
{
    costomer A1;
    costomer A2("Ajeet",26912,12000);
    costomer A3("Udit",46);

    A1.display();
    A2.display();
    A3.display();
}
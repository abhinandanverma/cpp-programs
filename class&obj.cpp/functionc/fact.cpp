#include<iostream>
using namespace std;
int factorial(int n) // make by the function
{
    int fact =1; //functin store karta hai
    for (int i=1; i<=n;i++) // this is hte for loop // int i =1 loop counter hai
    {
    fact=fact*i;
    }
    return fact; // answer return karta hai 
}

int main()
{
    int n;
    cout<<"Entert the: ";
    cin>>n;
    cout<<"factorial="<<factorial(n); //function call karta hai
    return 0;
}

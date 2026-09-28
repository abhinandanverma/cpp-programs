#include<iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p =50;
    cout<< *p <<endl;
    delete p;
}
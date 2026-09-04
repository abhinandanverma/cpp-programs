#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"\n1.(+)";
    cout<<"\n2.(-)";
    cout<<"\n3.(*)";
    cout<<"\n4.(/)";
    cout <<"\nEnter the choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
     cout << "Result="<<a+b;
        break;
        case 2:
     cout << "Result="<<a-b;
        break;
        case 3:
     cout << "Result="<<a*b;
        break;
           case 4:
     cout << "Result="<<(float)a*b;
        break;
        
    
    default:
    cout<<"inveled choice";
    }
    return 0;
}
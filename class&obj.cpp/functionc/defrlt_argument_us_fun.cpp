// #include<iostream>
// using namespace std;
// int add(int a,int b) //default
// {
//     return a+b;
// }
// int main()
// {
//     cout<<"sum =" <<add (4,5);
//     // return 0;
// }


#include<iostream>
using namespace std;
int add(int a=2,int b=3) //default
{
    return a+b;
}
int main()
{
    cout<<"sum =" <<add ();
    // return 0;
}
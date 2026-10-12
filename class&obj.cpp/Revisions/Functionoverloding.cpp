#include<iostream>
using namespace std;
class Addition{
public:
    void add(int a,int b){
        cout << a + b << endl;
    }
    void add (int a,int b,int c){
        cout << a + b + c << endl;
    }
    void add ( float a,float b){
        cout << a + b <<endl;
    }
};
int main()
{
    Addition obj;

    obj.add (10,20);
    obj.add (10,20,30);
    obj.add (2.5f,3.5f);
}
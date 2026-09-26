#include<iostream>
using namespace std;
class  abhi // abhi is the class name
{
    public:
    void displayabhi()
    {
        cout<< "Hello form abhi" <<endl;
    }
};
class verma :public abhi
{
    public:
        void displayverma()
        {
            cout<< "i am forma class verma"<<endl;
        }
};
int main()
{
    verma obj; 
    obj.displayabhi();
    obj.displayverma();
}

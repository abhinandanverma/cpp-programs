#include<iostream>
using namespace std;
class number
{
    int n;
    public:
        void setData(int x)
        {
            n=x;
        }
        void add(number obj)
        {
            cout<<"sum"<<" "<<n+obj.n;
        }
};
int main()
{
    number A,B;
    A.setData(10);
    B.setData(20);
    A.add(B);
}
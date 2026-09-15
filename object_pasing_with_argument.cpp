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
        void add(number obj) // ek object perameter hai
        {
            cout<<"sum"<<" "<<n+obj.n; // A ka n + B ke n ki value  
        }
};
int main()
{
    number A,B; // Do object  banaya A or B.
    A.setData(10); //A me 10 store hua.
    B.setData(20); //B me 20 store hua.
    A.add(B); // object B ko add()function ke argumet ke roop mein pass liya.
}
// Result =30 
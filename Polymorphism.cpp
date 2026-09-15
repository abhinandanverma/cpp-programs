#include<iostream>
using namespace std;
class calculetar
{
        public:
        void add (int a, int b,int c)
        {
            cout<<"sun:" <<a+b+c<<endl;
        }
 };
 int main ()
 {
 calculetar obj;
 obj.add(23,34,45);
return 0;
 }
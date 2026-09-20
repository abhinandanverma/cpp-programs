#include<iostream>
using namespace std;
class Shepe{
   virtual void draw() = 0 ;
};
class Cirele:public Shepe
{
    public:
      void draw()
      {
        cout<< " this is the cirele class " <<endl;
      }
};
int main(){
    Cirele c1;
    c1.draw();
};
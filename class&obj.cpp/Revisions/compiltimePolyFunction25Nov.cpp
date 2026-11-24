#include<iostream>
using namespace std;
class Math{
    public:
    int add(int a , int b ) {
        return a+b;
    }  
    double add(double a ,double b){

      return a+b;
    }

    int add ( int a, int b ,int c) {
      return a+b+c;
    }
};
int main(){
    Math m;
    cout<<"Add int: "<<m.add(2,3)<<endl; 
    cout<<"Add double: "<<m.add(2.3,4.5)<<endl;;
    cout<<"Add int: "<<m.add(1,3,2);

    return 0;
}
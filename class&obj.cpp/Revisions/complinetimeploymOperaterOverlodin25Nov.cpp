#include<iostream>
using namespace std;
class Complex{
public:
    float read , imag;
    Complex (float r, float i){
        read =r; imag =i;
    }
    Complex operator + (const Complex  &c){
        return Complex(read + c.read , imag +c.imag);
    }
};
int main(){
    Complex c1(2.5,3.5) , c2(1.5,2.5);

    Complex c3 = c1 +c2; // class overloding

    cout<<"Result : "<<c3.read <<" + "<<c3.imag<<"i"<<endl;
}
#include<iostream>
using namespace std;
class abc{
    float result;
    public:
    void area (int r){
     result=2*3.54*r*r;
     cout<<"area of circle "<<result;   
    }
    void area (int l,int b)
    {
        result=l*b;
        cout<<"area of rectangle="<<result<<endl;
    }
};
int main(){
    abc obj;
    obj.area(7);
    obj.area(9,10);
    return 0;
}


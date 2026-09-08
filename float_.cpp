// #include<iostream>
// using namespace std;
// class abc{
//     float result;
//     public:
//     void area (int r){
//      result=2*3.14*r*r;
//      cout<<"area of circle "<<result<<endl;   
//     }
//     void area (int l,int b)
//     {
//         result=l*b;
//         cout<<"area of rectangle="<<result<<endl;
//     }
// };
// int main(){
//     abc obj;
//     obj.area(7);
//     obj.area(9,10);
//     return 0;
// }

#include<iostream>
using namespace std;
class area
{
    int a,b;
    float result;
    public:
    void c_area(int a)
    {
        result=3.14*a*a;
        cout<<"circle area="<<result<<endl;
    }
        void r_area(int a,int b)
    {
        result=a*b;
        cout<<"rectangle area="<<result<<endl;
    }
        void t_area(int a,int b)
    {
        result=1.0/2*a*b;
        cout<<"triangle area="<<result<<endl;
    }
        void s_area(int a)
    {
        result=a*a;
        cout<<"square area="<<result<<endl;
    }
    };
    int main()
    {
        area obj1;
        area obj2;
        area obj3;
        area obj4;
        obj1.c_area(5);
        obj2.r_area(6,7);
        obj3.t_area(8,4);
        obj4.s_area(9);
    }
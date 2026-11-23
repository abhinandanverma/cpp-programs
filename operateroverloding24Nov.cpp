// #include <iostream>
// using namespace std;

// class A {
// public:
//     int x;

//     // Addition function
//     void add(A obj) {
//         cout << x + obj.x;
//     }
// };

// int main() {

//     A a, b;

//     a.x = 10;
//     b.x = 20;

//     a.add(b);

//     return 0;
// }



#include<iostream>
using namespace std;
class A{
    public:
    int X;
    void add (A obj){
        cout<< X + obj.X;
    }

};
int main(){
    A a ,b;
    a.X = 10;
    b.X = 12;
    a.add(b);

    return 0;
}
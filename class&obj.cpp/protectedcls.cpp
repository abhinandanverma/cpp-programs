// #include<iostream>
// using namespace std;
// class Parent{
// protected:
//     int age;
// };
// class child: public Parent{
// public:
//     void showAge(int age){
//         cout<<"Age is = "<<age<<endl;
//     }
// };
// int main(){
//     child c1 ;
//     c1.showAge(19);
//     retuen 0;
// }


#include<iostream>
using namespace std;
class Parent{
protected:
    int age =20;
};
class child : public Parent{
public:
    void showAge(){
        cout<<"Age is = "<<age<<endl;
    }
};
int main(){
    child c1 ;
    c1.showAge();
}
// #include<iostream>
// using namespace std;
// class Parent{
//     protected:
//        int age =50;
// };
// class child: public Parent{
//     public:
//        void deisplay(){
//         cout<< " Age is: "<< age <<endl;

//        }
// };
// int main()
// {
//     child c1;
//     c1.deisplay();
// }



#include<iostream>
using namespace std;
class Dog{
protected:
    string name = "Toomy";

};
class petname: public Dog{
public:
    void display(){
        cout<<"Name = "<<name<<endl;
    } 
    
};
int main(){
    petname p1;
    p1.display();
}


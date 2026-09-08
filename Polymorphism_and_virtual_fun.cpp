// #include<iostream>
// using namespace std;
// class complex{
// int real,img;
// public:
// complex(int real,int img){
//     this->real=real;
//     this->img =img;
// }
// complex()
// {
    
// }
// void display(){
//   cout<<real<<"+i"<<img<<endl;
// }
// complex operator +(complex &c)
// {
//     complex ans;
//     ans.real =real+c.real;
//     ans.img =img+c.img;
//     return ans;
// }
// };
// int main(){
//     complex c1 (3,4);
//     complex c2(4,6);
//     complex c3 =c1+c2;
//     c3.display();
// }

// ______________________________________ virtualfunction_________________________________________

#include<iostream>
using namespace std;
class  Animal
{
    public:
     virtual void speak() //virtualkey word
        {
            cout<<"HuHu\n";
        }

};
class Dog:public Animal
{
    public:
    void speak()
    {
        cout <<"Bark\n";
    }
};
int main()
{
    Animal *p;
    p = new Dog();
    p -> speak();
    

}
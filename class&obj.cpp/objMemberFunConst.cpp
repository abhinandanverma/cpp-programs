#include<iostream>
using namespace std;
class Student 
{
    public:
        string name;
        int age;
        Student()//constructor
        {
            name ="Abbhinandan";
            age=19;
        }
        void displya()
        {
            cout << "Nmae: "<< name << endl;
            cout << "Age :"<< age <<endl;
        }
};
int main()
{
   Student s1;// s1 is ths obj define
   s1.displya();
   return 0;
}
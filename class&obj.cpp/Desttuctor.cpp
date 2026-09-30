#include<iostream>
using namespace std;
class Student
{
    public:
    Student() //constructor
    {
      cout << " Constructor Called " <<endl;
    }
    ~Student()// ~ Desteuctor
    {
      cout<< " ~Desteuctor celled " << endl ; 
    }
};
int main ()
{
   Student s1;
}
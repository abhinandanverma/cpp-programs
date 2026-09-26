#include<iostream>
using namespace std;
class Student
{
    public:
    Student()
    {
      cout << " Constructor Called " <<endl;
    }
    ~Student()
    {
      cout<< " ~Desteuctor celled " << endl ;
    }
};
int main ()
{
   Student s1;
}
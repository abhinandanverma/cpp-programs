#include<iostream>
using namespace std;
class student 
{
    private:
        int marks;
    public:
        void Marks(int m)
        {
            marks =m;
        }
        void display()
        {
            cout<< "Your Marks: " <<marks <<endl;
        }
};
int main()
{
    student s1;
    s1.Marks(99);
    s1.display();
}    
#include<iostream>
using namespace std;
class student 
{
    private:
        int marks;
    public:
        void setMarks(int m)
        {
            marks =m;
        }
        void display()
        {
            cout<< "Your marks: " <<marks <<endl;
        }
};
int main()
{
    student s1;
    s1.setMarks(99);
    s1.display();
}    
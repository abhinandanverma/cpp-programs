#include <iostream>
using namespace std;
class A//Ais the calss name
{
    private:;
        int a = 90;
    public: 
        friend void showMarks(A obj);
};
void showMarks(A obj)
{
    cout<< "Marks = " << obj.a;
}
int main()
{
    A s1;
    showMarks (s1);

}
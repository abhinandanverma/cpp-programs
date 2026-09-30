#include <iostream>
using namespace std;

class Calculator
{
public:
    // Two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Two double values
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Sum = " << c.add(10, 20) << endl;
    cout << "Sum = " << c.add(10, 20, 30) << endl;
    cout << "Sum = " << c.add(10.5, 20.5) << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0;

    try
    {
        // Check division by zero
        if (b == 0)
        {
            throw b;
        }

        cout << "Division = " << a / b << endl;
    }
    catch (int x)
    {
        // Handle the exception
        cout << "Cannot divide by zero" << endl;
    }

    return 0;
}

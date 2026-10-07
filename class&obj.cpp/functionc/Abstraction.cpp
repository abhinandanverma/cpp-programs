#include <iostream>
using namespace std;

// Class
class ATM
{
public:

    // Function
    void withdraw()
    {
        cout << "Money Withdrawn" << endl;
    }
};

int main()
{
    // Create object
    ATM a;

    // Call function
    a.withdraw();

    return 0;
}
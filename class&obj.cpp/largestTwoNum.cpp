
#include <iostream>
using namespace std;

// Number class
class Number {
public:
    int a, b;

    // Largest number find karne ka function
    void findLargest() {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;

        if (a > b) {
            cout << a << " is largest";
        }
        else if (b > a) {
            cout << b << " is largest";
        }
        else {
            cout << "Both numbers are equal";
        }
    }
};

int main() {
    // Object banaya
    Number n1;

    // Function call kiya
    n1.findLargest();

    return 0;
}

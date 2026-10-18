
#include <iostream>
using namespace std;

// Calculator class
class Calculator {
public:
    int a, b;

    // Calculation karne ka function
    void calculate() {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0) {
            cout << "Division = " << (float)a / b << endl;
        } else {
            cout << "Cannot divide by zero!" << endl;
        }
    }
};

int main() {
    // Object banaya
    Calculator c1;

    // Function call kiya
    c1.calculate();

    return 0;
}

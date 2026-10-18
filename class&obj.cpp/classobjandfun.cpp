
#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
public:
    int length, width;

    // Area calculate karne ka function
    void calculateArea() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Area = " << length * width << endl;
    }
};

int main() {
    // Object banaya
    Rectangle r1;

    // Function call kiya
    r1.calculateArea();

    return 0;
}

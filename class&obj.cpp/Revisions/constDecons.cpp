#include<iostream>
using namespace std;

class Car {
    public:
        string brand;
        
        // Constructor - object bante hi chal jata hai
        Car(string b) {
            brand = b;
        }
        
        void display() {
            cout << "Car Brand: " << brand;
        }
};

int main() {
    Car c1("Tata");  // object banate time value de di
    c1.display();
    return 0;
}
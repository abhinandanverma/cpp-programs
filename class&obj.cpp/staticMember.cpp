// #include<iostream>
// using namespace std;

// class Student {
//     public:
//         int roll;          // har object ka alag roll
//         static int count;  // sab object ke liye 1 hi count
    
//         Student() {
//             roll = ++count;  // naya object bane to count badh jaye
//         }
        
//         void show() {
//             cout << "Roll: " << roll << " Total Students: " << count << endl;
//         }
// };

// // static ko class ke bahar 0 se initialize karna zaroori hai
// int Student::count = 0;

// int main() {
//     Student s1;  // count = 1
//     Student s2;  // count = 2
//     Student s3;  // count = 3

//     s1.show();
//     s2.show();
//     s3.show();
    
//     return 0;
// }



#include<iostream>
using namespace std;

class Car {
    public:
        static int total;  // ye sab car ke liye 1 hi hai

        Car() {
            total++;  // jaise hi nayi car bane, total +1
        }
};

// class ke bahar 0 se start karna padega
int Car::total = 0; 

int main() {
    Car c1;  // 1 car bani
    Car c2;  // 2 car bani
    Car c3;  // 3 car bani

    cout << "Total Car: " << Car::total;
    return 0;
}
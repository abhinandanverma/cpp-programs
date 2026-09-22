#include<iostream>
using namespace std;
void fun(){
     static  int x =0;  ///using aa static key word.
    cout << "x = " << x <<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
}

// _______________________________wothout static key word______________________


// #include<iostream>
// using namespace std;
// void fun(){
//     int x =0;
//     cout << "x = " << x <<endl;
//     x++;
// }
// int main(){
//     fun();
//     fun();
//     fun();
// }
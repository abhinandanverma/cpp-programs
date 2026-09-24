// #include<iostream>
// using namespace std;
// int sum(int,int); 
// int main(){
//     int num1,num2;
//     cout<<"Enter the first number"<<endl;
//     cin>>num1;
//     cout<<"Enter the first number"<<endl; // num 1,num2 are actual paraameters
//     cin>>num2;
//     cout<<"the sum is:"<<sum(num1 ,num2);
//     return 0;

// }
// int sum(int a,int b){
//     int c =a+b;   // Formal, a and b raking values actual parameters num1 nad num2
//     return c;
// }


#include<iostream>
using namespace std;
int add(int ,int);

int main(){
    int num1,num2;
    cin>>num1;
    cout<<endl;
    cin>>num2;
    cout<<add(num1 ,num2);
}


   int add (int a,int b){
   int sum=a+b;
   return sum;
}


// #include<iostream>
// using namespace std;
//  void printhello(){
//     cout<<"hello";
//  }
//  int main(){
//     printhello();
//  }

 

 
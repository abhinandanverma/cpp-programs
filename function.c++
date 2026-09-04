// #include<iostream>
// using namespace std;
// int sum (int a,int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int num1,num2;
//     cout<<"enter the first number:";
//     cin>>num1;
//     cout<<"enter the second number:";
//     cin>>num2;
//     cout<<"the sum is :"<<sum(num1,num2);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int add(int a=10,int b=20){
// return a+b;
// }
// int main()
// {
//     cout<<"sum with default argument:"<<add()<<endl;
//     cout<<"sum with one argument:"<<add(5)<<endl;
//     cout<<"sum with default argument:"<<add(5,15)<<endl;
//     return 0;
// }


// ///Default Arguments//
// #include<iostream>
// using namespace std;
// float money_Recivedd(int current_money,float factor=1.04) {
//     return current_money*factor;
// }

// int main(){
//     int a,b;
//     int money=100000;
//     cout<<"if you have"<<money<<"Rs in your bank account ,you will recive"<<money_Recivedd(money)<<"Rs after 1 year";
//     cout<<" For VIP: if you have"<<money<<"Rs in your bank account ,you will recive"<<money_Recivedd(money,1.1)<<"Rs after 1 year";

//     return 0;
// }


// #include<iostream>
// using namespace std;
// float interest(float p,float  r=5, float t=2){
//     return (p*r*t)/100;
// }
// int main()
// {
//     float principal;

//     cout<<"Enter principal Amount:"<<endl;
//     cin>>principal;
    
//     cout<<"Simpal Interest:"<<interest(principal);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int area(int length=10,int breadth=5){
//     return length*breadth;
// }
// int main()
// {
//     cout<<"Area= "<<area();
//     return 0;
// }

#include<iostream>
using namespace std;
int area(int length, int breadth=5)
{
    return length*breadth;
}
int main(){
    int length;
    cout<<"Enter the length:";
    cin>>length;

    cout<<"Area= "<<area(length);
    return 0;
}

// #include<iostream>
// using namespace std;
// class car{
// public:
//     string name;
//     int price;
//     int seates;
//     string type;

// };
// int main(){
//     car c1;
//     c1.name="honda city";
//     c1.price=130000;
//     c1.seates=5;
//     c1.type="sedan";

//     car c2;
//     c2.name="swift";
//     c2.price=60000;
//     c2.seates=5;
//     c2.type="hatcback";

//     car c3;
//     c3.name="kia";
//     c3.price=120000;
//     c3.seates=5;
//     c3.type="suv";

//     cout<<c1.name<<" "<<c1.price<<" "<<c1.seates<<" "<<c1.type<<""<<endl;
//     cout<<c2.name<<" "<<c2.price<<" "<<c2.seates<<" "<<c2.type<<""<<endl;
//     cout<<c3.name<<" "<<c3.price<<" "<<c3.seates<<" "<<c3.type<<""<<endl;
// }



// #include<iostream>
// using namespace std;
// class car{
// public:
//     string name;
//     int price;
//     int seates;
//     string type;

// };
// void print(car c){
//   cout<<c.name<<" "<<c.price<<" "<<c.seates<<" "<<c.type<<""<<endl;
// }
// int main(){
//     car c1;
//     c1.name="Honda city";
//     c1.price=130000;
//     c1.seates=5;
//     c1.type="sedan";

//     car c2;
//     c2.name="swift";
//     c2.price=60000;
//     c2.seates=5;
//     c2.type="hatcback";

//     car c3;
//     c3.name="kia";
//     c3.price=120000;
//     c3.seates=5;
//     c3.type="SUV";

//     print(c1);
    
//     print(c2);
     
//     print(c3);
      
// }



// #include<iostream>
// using namespace std;
// class student
// {
//         string name;
//         int roll_number;
//         float gpa;

//       public:
//       student()
//       {   
//         //defaultconstructor//   
//         name= "Abhinandan";
//         roll_number = 3;
//         gpa=9.9;
//       }
//       // parameterized constructor//
//       student( string a,int b,float c){
//         name =a;
//         roll_number=b;
//         gpa=c;
        
//       }
//       void display()
//       {
//         cout<<name<<" "<<roll_number<<" "<<gpa<<" "<<endl;
//       }
// };
// int main(){
//   student s1;
//   student s2("ajeet",36,8.8);
//   student s3(s2);//copy constructor..
//   s1.display();
//   s2.display();
//   s3.display();
// }

// #include<iostream>
// using namespace std;
// class carClass
// {
      
//        string name;
//        int price;
//        int seates;
//        string type;
//        public:    
//        carClass()
//         {
//           name="TATA nono";
//           price=300000;
//           seates=5;
//         }
//         carClass(string name,int price,string type)
//         {
//           this->name =name;
//           this->price=price;
//           this-> type=type;
//         }
//         void display()
//         {
//           cout<<name<<" "<<price<<" "<<seates<<" "<<endl;
//         }
// };
// int main(){
//   carClass c1;
//   carClass c2("BMW",5400," ");
//   c1.display();
//   c2.display();
// }

// #include<iostream>
// using namespace std;
// class cricketer{
//   public:
//     string name;
//     int run; 
//     float avg;
//     cricketer(string name,int run,float avg)
//     {
//       this -> name=name;
//       this ->run=run;
//       this->avg=avg;
      
//     }
//     void display()
//     {
//       cout<<this->name<<" "<<this->run<<" "<<this->avg<<endl;
//     }
//     int matches()
//     {
//       return run/avg;
//     }
// };
// int main(){
//   cricketer c1("Virat kohli",25000,55.2);
//   cricketer c2("Rohti shrma",18000,47.8);
//   c1.name="Sachim";
//   c1.display();
//   c2.display();
//   cout<<c1.matches()<<endl;
//   cout<<c2.matches()<<endl;
// }


#include<iostream>
using namespace std;
void add(int ,int);
int main()
{
int a, b;
cout<<"Enter the two number:"<<endl;
cin>>a>>b;
add(a,b);
return 0;
}
void add(int a,int b)
{
  int c;
  c=a+b;
  cout<<"Addition="<<c;
}

// #include <iostream>
// using namespace std;

// class Array
// {
//     int arr[2][3];

// public:
//     void input()
//     {
//         cout << "Enter 6 elements:" << endl;

//         for(int i = 0; i < 2; i++)
//         {
//             for(int j = 0; j < 3; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//     }

//     void display()
//     {
//         cout << "Array elements are:" << endl;

//         for(int i = 0; i < 2; i++)
//         {
//             for(int j = 0; j < 3; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Array obj;

//     obj.input();
//     obj.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[2][2];

//     for(int i = 0; i < 2; i++)
//     {
//         for(int j = 0; j < 2; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for(int i = 0; i < 2; i++)
//     {
//         for(int j = 0; j < 2; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class abc{
//     float result;
//     public:
//     void area (int r){
//      result=2*3.54*r*r;
//      cout<<"area of circle "<<result;   
//     }
//     void area (int l,int b)
//     {
//         result=l*b;
//         cout<<"area of rectangle="<<result<<endl;
//     }
// };
// int main(){
//     abc obj;
//     obj.area(7);
//     obj.area(9,10);
//     return 0;
// }


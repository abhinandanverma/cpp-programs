#include<iostream>
using namespace std;
    class Addiion {
    public:
        int add (int a , int b){
          return a + b;
        }
        int add (int a, int b , int c){
            return a + b + c;
        }
        double add (double a, double b){
            cout<< a + b;
        }
    };
    int main(){
        Addiion a1;
        cout<< a1.add(12,34)<<endl;
        cout<< a1.add(12,34,56)<<endl;
        cout<< a1.add(112.3,412.23);

        return 0;
    }

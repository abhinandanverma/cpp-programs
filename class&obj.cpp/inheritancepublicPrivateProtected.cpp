#include<iostream>
using namespace std;
class A{
    public:
        int x = 10;
        protected:
        int y = 20;
        private:
        int z = 30;
        public:
        void show(){
            cout<< "public: "<< x <<endl;
            cout<< "protected: "<< y <<endl;
            cout<< "private: "<< z <<endl;
        }
};
class B:public A{
public:
    void display(){
        cout<< "public: " << x <<endl;
        cout<< "prootected; "<< y <<endl;
    }
};
int main(){
    B obj;
    obj.show();
    obj.display();
    
    return 0;
}
//C++ Program to demonstrate an Example of Multiple Inheritance
#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void getdata1(int d){
            a = d;
        }
};

class B{
    protected:
        int b;
    public:
        void getdata2(int e){
            b = e;
        }
};

class C : public A,public B{
    public:
        void sum(){
            int c = a+b;
            cout<<"C = "<<c<<endl;
        }
};

int main(){
    C s;
    s.getdata1(2);
    s.getdata2(3);
    s.sum();
    return 0;
}
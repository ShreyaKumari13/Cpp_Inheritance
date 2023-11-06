//C++ Program to access protected data member using Inheritance
#include<iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
        int p;
    public:
        void get(int b){
            a = b;
        }
        void put(){
            cout<<"a = "<<a<<endl;
        }
};

class B:public A{
    private:
        int b;
    public:
        void getb(int c){
            b = c;
        }
        void getp(int z){
            p = z;
        }
        void putb(){
            cout<<"b = "<<b<<endl;
        }
        void putp(){
            cout<<"p = "<<p<<endl;
        }
};

int main(){
    B objb;
    objb.get(10);
    objb.getb(20);
    objb.getp(30);

    objb.put();
    objb.putb();
    objb.putp();
    return 0;
}
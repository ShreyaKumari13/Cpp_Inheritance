//C++ program to demonstrate an example of Single Inheritance
#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        void getdata(){
            cout<<"Enter the value of a : "<<endl;
            cin>>a;
        }
        int geta(){
            return a;
        }
        void putdata(){
            cout<<"The value of a is : "<<a<<endl;
        }
};

class B : private A{
    private:
        int b;
    public:
        void getdata(){
            A :: getdata();
            cout<<"Enter the value of b : "<<endl;
            cin>>b;
        }
        void putdata(){
            A :: putdata();
            cout<<"The value of b is : "<<b<<endl;
        }
        void cal(){
            cout<<"The sum of the number is : "<<geta()+b<<endl;
        }
};

int main(){
    B q;
    q.getdata();
    q.putdata();
    q.cal();

    return 0;
}
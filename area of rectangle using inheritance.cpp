//C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class side{
    protected:
        int a,b;
    public:
        void getdata(){
            cout<<"Enter the length"<<endl;
            cin>>a;
            cout<<"Enter the breadth"<<endl;
            cin>>b;
        }
};

class area : public side{
    private:
        int area;
    public:
        void display(){
            cout<<"The area of the rectangle is : "<<a*b<<endl;
        }
};

int main(){
    area a;
    a.getdata();
    a.display();
    return 0;
}
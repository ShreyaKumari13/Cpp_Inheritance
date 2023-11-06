//C++ Program to find area and volume using multiple inheritance
#include<iostream>
using namespace std;

class area{
    private:
        int l,b;
    public:
        void getdata(){
            cout<<"Enter the length : "<<endl;
            cin>>l;
            cout<<"Enter the breadth : "<<endl;
            cin>>b;
        }
        void putdata(){
            cout<<"The area of the rectangle is : "<<l*b<<endl;
        }
};

class volube{
    private:
        int l,b,h;
    public:
        void getdata2(){
            cout<<"Enter the length : "<<endl;
            cin>>l;
            cout<<"Enter the breadth : "<<endl;
            cin>>b;
            cout<<"Enter the heigth : "<<endl;
            cin>>h;
        }
        void putdata2(){
            cout<<"The volume of the rectangle is : "<<l*b*h<<endl;
        }
};

class result : private area,private volube{
    public:
        void display(){
            getdata();
            getdata2();
            putdata();
            putdata2();
            cout<<"Done !!";
        }
};

int main(){
    result q;
    q.display();
    return 0;
}
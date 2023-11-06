//C++ Program to demonstrate an Example of Multilevel Inheritance
#include<iostream>
using namespace std;

class area{
    private:
        int l,b;
    public:
        void getdata(){
            cout<<"AREA"<<endl;
            cout<<"Enter the length : "<<endl;
            cin>>l;
            cout<<"Enter the breadth : "<<endl;
            cin>>b;
        }
        void putdata(){
            cout<<"The area of the rectangle is : "<<l*b<<endl;
        }
};

class volume : public area{
    private:
        int l,b,h;
    public:
        void getdata(){
            area :: getdata();
            cout<<"VOLUME"<<endl;
            cout<<"Enter the length : "<<endl;
            cin>>l;
            cout<<"Enter the breadth : "<<endl;
            cin>>b;
            cout<<"Enter the heigth : "<<endl;
            cin>>h;
        }
        void putdata(){
            area :: putdata();
            cout<<"The volume of the rectangle is : "<<l*b*h<<endl;
        }
};

class perimeter : public volume{
    private:
        int l,b;
    public:
        void getdata(){
            volume :: getdata();
            cout<<"PERIMETER"<<endl;
            cout<<"Enter the length : "<<endl;
            cin>>l;
            cout<<"Enter the breadth : "<<endl;
            cin>>b;
        }
        void putdata(){
            volume :: putdata();
            cout<<"The perimeter of the rectangle is : "<<2*(l+b)<<endl;
        }
};

int main(){
    perimeter rect;
    rect.getdata();
    rect.putdata();
    return 0;
}

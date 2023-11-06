//C++ Program to enter Student details of different Stream using Hierarchical Inheritance
#include<iostream>
using namespace std;

class naming{
    private:
        char name[78];
    public:
        void getdata(){
            cout<<"Enter the name : "<<endl;
            cin>>name;
        }
        void putdata(){
            cout<<"The name of the student is : "<<name<<endl;
        }
};

class mathing : public naming{
    private:
        int math;
    public:
        void getdata(){
            naming :: getdata();
            cout<<"Enter the marks in maths : "<<endl;
            cin>>math;
        }
        void putdata(){
            naming :: putdata();
            cout<<"The marks of the student in maths is : "<<math<<endl;
        }
};

class phying : public naming{
    private:
        int physics;
    public:
        void getdata(){
            naming :: getdata();
            cout<<"Enter the marks in physics : "<<endl;
            cin>>physics;
        }
        void putdata(){
            naming :: putdata();
            cout<<"The marks of the student in physics is : "<<physics<<endl;
        }
};

class cheming : public naming{
    private:
        int chemistry;
    public:
        void getdata(){
            naming :: getdata();
            cout<<"Enter the marks in chemistry : "<<endl;
            cin>>chemistry;
        }
        void putdata(){
            naming :: putdata();
            cout<<"The marks of the student in chemistry is : "<<chemistry<<endl;
        }
};

int main(){
    mathing m;
    m.getdata();
    m.putdata();
    cheming c ;
    c.getdata();
    c.putdata();
    phying p;
    p.getdata();
    p.putdata();
    return 0;
}
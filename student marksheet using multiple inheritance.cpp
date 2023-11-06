//C++ program display student marksheet using multiple inheritance
#include<iostream>
using namespace std;

class student{
    private:
        int rno;
        char name[20];
    public:
        void getdata(){
            cout<<"Enter roll no : "<<endl;
            cin>>rno;
            cout<<"Enter name : "<<endl;
            cin>>name;
        }
        void putdata(){
            cout<<"Student roll no is : "<<rno<<endl;
            cout<<"Student name is : "<<name<<endl;
        }
};

class result{
    private:
        int math;
    public:
        void getmarks(){
            cout<<"Enter the marks : "<<endl;
            cin>>math;
        }
        void putmarks(){
            cout<<"Student marks is : "<<math<<endl;
        }
};

class detail : private student,private result{
    public:
        void display(){
            getdata();
            getmarks();
            putdata();
            putmarks();
        }
};
int main(){
    detail w;
    w.display();
    return 0;
}
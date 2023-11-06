//C++ Program for enter Patient details using Inheritance
#include<iostream>
using namespace std;

class doctor{
    private:
        char name[80];
        char degree[80];
    public:
        void getedu(){
            cout<<"Enter the doctor name : "<<endl;
            cin>>name;
            cout<<"Enter doctorate degree : "<<endl;
            cin>>degree;
        }
        void showedu(){
            cout<<"Doctor Name : "<<name<<endl;
            cout<<"Doctorate Degree : "<<degree<<endl;
        }
};

class patient{
    private:
        char name[80];
        char number[80];
    public:
        void getdata(){
            cout<<"Enter Patient Name : "<<endl;
            cin>>name;
            cout<<"Enter Bed Number : "<<endl;
            cin>>number;
        }
        void showdata(){
            cout<<"Patient Name : "<<name<<endl;
            cout<<"Bed Number : "<<number<<endl;
        }
};

class department{
    private:
        char ward[80];
    public:
        void getdata(){
            cout<<"Enter the Ward Name : "<<endl;
            cin>>ward;
        }
        void showdata(){
            cout<<"Ward Name : "<<ward<<endl;
        }
};

class amount{
    private:
        int dues;
        patient pat;
        doctor doc;
        department dept;
    public:
        void getdata(){
            pat.getdata();
            dept.getdata();
            doc.getedu();
            cout<<"Enter dues of Patient : "<<endl;
            cin>>dues;
        }
        void showdata(){
            pat.showdata();
            dept.showdata();
            doc.showedu();
            cout<<"Total Dues of Patient : "<<dues<<endl; 
        }
};

int main(){
    amount a;
    a.getdata();
    a.showdata();
    return 0;
}
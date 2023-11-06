//C++ Program for Inheritance Beyond Single Level
#include<iostream>
using namespace std;

class industry{
    protected:
        char name[25];
    public:
        void insert(){
            cout<<"Enter your name : "<<endl;
            cin>>name;
        }
        void output(){
            cout<<"Name : "<<name<<endl;
        }
};

class computer : public industry{
    protected:
        char education[10];
        float salary;
    public:
        void insert(){
            industry :: insert();
            cout<<"Enter your highest qualification : "<<endl;
            cin>>education;
            cout<<"Enter your salary : "<<endl;
            cin>>salary;
        }

        void output(){
            industry :: output();
            cout<<"Highest Qualification is : "<<education<<endl;
            cout<<"Salary drawn is : "<<salary<<endl;
        }
};

class manager : public industry{
    protected:
        int experience;
        char grade;
    public:
        void insert(){
            industry :: insert();
            cout<<"Your previous experience : "<<endl;
            cin>>experience;
            cout<<"Your grade : "<<endl;
            cin>>grade;
        }
        void output(){
            industry :: output();
            cout<<"Total previous experience : "<<experience<<endl;
            cout<<"You grade : "<<grade<<endl;
        }
};

class admin : public industry{
    protected:
        char type[10];
    public:
        void insert(){
            industry::insert();
            cout<<"Type : "<<endl;
            cin>>type;
        }
        void output(){
            industry :: output();
            cout<<"Type : "<<type<<endl;
        }
};

class soft : public computer{
    protected:
        char expert[10];
    public:
        void insert(){
            //computer::insert;
            cout<<"Enter your expertise field : "<<endl;
            cin>>expert;
        }
        void output(){
            //computer :: output;
            cout<<"Expertise Field is : "<<expert<<endl;
        }
};

class hard : public computer{
    protected:
        int experience;
    public:
        void insert(){
            computer :: insert();
            cout<<"Enter previous experience : "<<endl;
            cin>>experience;
        }
        void output(){
            computer :: output();
            cout<<"Previous experience in hardware : "<<experience<<endl;
        }
};

int main(){
    soft sl; 
    hard h1; 
    manager m1; 
    admin a1; 

    cout<<"Enter the Data for Software Personnel : "<<endl; 
    sl.insert(); 
    cout<<"\nInformation of Software Personnel : "; 
    sl.output(); 
    cout<<"\nEnter the Data for Hardware Personnel : \n"; 
    h1.insert(); 
    cout<<"\nInformation of Hardware Personnel : "; 
    h1.output(); 
    cout<<"\nEnter Data for Manager : \n"; 
    m1.insert(); 
    cout<<"\nManager Information : "; 
    m1.output(); 
    cout<<"\nEnter Data for Administrative Staft : \n"; 
    a1.insert(); 
    cout<<"\nOutput of the Administrative Staff : "; 
    a1.output(); 
    return 0;
}
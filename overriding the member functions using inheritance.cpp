//C++ Program to Overriding the member functions using Inheritance
#include<iostream>
using namespace std;

class employee{
    private:
        char f_name[45];
        int i_number;
        int age;
        float salary;
    public:
        void enter_data(void){
            cout<<"Enter the first name = ";
            cin>>f_name;
            cout<<"Enter the identity number = ";
            cin>>i_number;
            cout<<"Enter the age = ";
            cin>>age;
            cout<<"Enter the salary = ";
            cin>>salary;
        }
        void display_data(){
            cout<<"Name = "<<f_name<<endl;
            cout<<"Identity Number = "<<i_number<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
};

class engineer : public employee{
    private:
        char design[56];
    public:
        void enter_data(){
            employee :: enter_data();
            cout<<"Enter the designation of the engineer : ";
            cin>>design;
        }
        void display_data(void){
            cout<<"Display the particulars of the engineer"<<endl;
            employee :: display_data();
            cout<<"Designation = "<<design;
        }
};

int main(){
    engineer er;
    er.enter_data();
    er.display_data();
    return 0;
}
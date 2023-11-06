//C++ Program to show access to private,public and protected using Inheritance
#include<iostream>
using namespace std;

class base{
    private:
        int data1;
    protected:
        int data2;
    public:
        int data3;
} ;

class derive : private base{
    public:
        void get_derive_data()
        {
            // cout << "\n Enter basedata1: ";
            // cin >> data1 ;  //not accessible; private data of base class
            cout << "\n Enter basedata2: "; 
            cin >> data2 ;  // accessible; protected data of base class
            cout << "\n Enter basedata3: ";
            cin >> data3 ;  // accessible; public data of the base class
        }
        void display_derive_data()
        {
                //cout << "\n basedata1 = " << data1;
                cout << "\n basedata2 = " << data2;
                cout << "\n basedata2 = " << data3;
        }
} ;

class derive2 : protected base{
    public:
        int derivedata2;
        void get_derive_data()
        {
            // cout << "\n Enter basedata1: ";
            // cin >> data1 ;  //not accessible; private data of base class
            cout << "\n Enter basedata2: "; 
            cin >> data2 ;  // accessible; protected data of base class
            cout << "\n Enter basedata3: ";
            cin >> data3 ;  // accessible; public data of the base class
        }
        void display_derive_data()
        {
            //cout << "\n basedata1 = " << data1;
            cout << "\n basedata2 = " << data2;
            cout << "\n basedata2 = " << data3;
        }
} ;

class derive3 : public base{
    public:
        int derivedata2;
        void get_derive_data()
        {
            // cout << "\n Enter basedata1: ";
            // cin >> data1 ;  //not accessible; private data of base class
            cout << "\n Enter basedata2: "; 
            cin >> data2 ;  // accessible; protected data of base class
            cout << "\n Enter basedata3: ";
            cin >> data3 ;  // accessible; public data of the base class
        }
        void display_derive_data()
        {
                //cout << "\n basedata1 = " << data1;
                cout << "\n basedata2 = " << data2;
                cout << "\n basedata2 = " << data3;
        }
} ;

int main(){
    return 0;
}
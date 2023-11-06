//C++ Program to illustrates the use of Constructors in single inheritance
#include<iostream>
using namespace std;

class A{
    protected:
        int x;
    public:
        A(){
            x = 0;
            cout << "\n The constructor of the class A without any argument is  invoked*** " ;
        }
        A(int X){
            x = X;
            cout << "\n The constructor of the class A with one argument is  invoked***" ;
        }
        void Display_x(void){    
            cout << "\n\t x = " << x ;   
        }
};

class B : public A{
    private:
        int y;
    public:
        B( ) : A ( ){ // Constructor of the derived class B without any argument
            y = 0 ;
            cout << "\n The constructor of the class B without any argument is  invoked**" ;
        }
        // Constructor of the derived class B with two arguments
        B(int X,int Y):A(X){     // Argument for constructor A,B
            y = Y ;
            cout << "\n The constructor of the class B with two arguments is invoked***" ;
        }
        void Display_y(void){     
            cout << "\n\t x = " << x ;   
            cout << "\n\t y = " << y ;    
        }
};

int main(){
    B b(23,78);
    b.Display_x();
    b.Display_y();
    // cout << "\n\n The first object b1 is in use********\n " ;
    // B b1 ;      // Invokes the constructor with zero arguments
    // b1.Enter_x( );
    // b1.Enter_y( );
    // b1.Display_x( );
    // b1.Display_y( );
    // cout << "\n\n The second object b2 is in use********\n " ;
    // B b2(5, 6);  // Invokes the constructor with two arguments
    // b2.Display_x( );
    // b2.Display_y( );
    return 0;
}
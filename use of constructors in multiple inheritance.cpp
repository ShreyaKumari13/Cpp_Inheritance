//C++ Program to illustrates the use of Constructors in multiple inheritance
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
        ~A(){
            cout << "\n The constructor of the class A is destructed*** " ;
        }
        A(int X){
            x = X;
            cout << "\n The constructor of the class A with one argument is  invoked***" ;
        }
        void Display_x(void){    
            cout << "\n\t x = " << x ;   
        }
};

class B{
    protected:
        int y;
    public:
        B( ){
            y = 0 ;
            cout << "\n The constructor of the class B without any argument is  invoked**" ;
        }
        B(int Y){
            y = Y ;
            cout << "\n The constructor of the class B with one arguments is invoked***" ;
        }
        ~B(){
            cout << "\n The constructor of the class B is destructed***" ;
        }
        void Display_y(void){      
            cout << "\n\t y = " << y ;    
        }
};

class C : public A,public B{
    private:
        int z;
    public:
        C( ) : A(),B( ){
            z = 0 ;
            cout << "\n The constructor of the class C without any argument is  invoked**" ;
        }
        C(int X,int Y,int Z):A(X),B(Y){
            z = Z ;
            cout << "\n The constructor of the class C with two arguments is invoked***" ;
        }
        ~C( ){
            cout << "\n The constructor of the class C is destructed***" ;
        }
        void Display_z(void){  
            A :: Display_x();
            B :: Display_y();
            cout << "\n\t x = " << x ;   
            cout << "\n\t y = " << y ;    
            cout << "\n\t z = " << z ;    
        }
};

int main(){
    C b(23,78,65);
    b.Display_z();
    return 0;
}
//C++ Program to illustrates the use of Constructors in multilevel inheritance
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

class B : public A{
    protected:
        int y;
    public:
        B( ) : A ( ){
            y = 0 ;
            cout << "\n The constructor of the class B without any argument is  invoked**" ;
        }
        B(int X,int Y):A(X){
            y = Y ;
            cout << "\n The constructor of the class B with two arguments is invoked***" ;
        }
        ~B(){
            cout << "\n The constructor of the class B is destructed***" ;
        }
        void Display_y(void){     
            A :: Display_x();
            cout << "\n\t x = " << x ;   
            cout << "\n\t y = " << y ;    
        }
};

class C : public B{
    private:
        int z;
    public:
        C( ) : B ( ){
            z = 0 ;
            cout << "\n The constructor of the class B without any argument is  invoked**" ;
        }
        C(int X,int Y,int Z):B(X,Y){
            z = Z ;
            cout << "\n The constructor of the class C with two arguments is invoked***" ;
        }
        ~C( ){
            cout << "\n The constructor of the class C is destructed***" ;
        }
        void Display_z(void){     
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
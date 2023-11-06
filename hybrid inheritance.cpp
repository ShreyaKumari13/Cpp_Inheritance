//C++ Program to demonstrate an Example of Hybrid Inheritance
#include<iostream>
using namespace std;

class student{
    protected:
        int rno;
    public:
        void get_no(int a){
            rno = a;
        }
        void put_no(void){
            cout<<"Roll no : "<<rno<<endl;
        }
};

class test:public student{
    protected:
        float part1,part2;
    public:
        void get_marks(float a1,float a2){
            part1 = a1;
            part2 = a2;
        }
        void put_marks(void){
            cout<<"Marks obtained in part1 is "<<part1<<" and in part2 is  "<<part2<<endl;
        }
};

class sports{
    protected:
        float score;
    public:
        void getscore(float s){
            score = s;
        }
        void putscore(void){
            cout<<"Sports : "<<score<<endl;
        }
};

class result : public test,public sports{
    private:
        float total;
    public:
        void display(){
            get_no(2);
            get_marks(5,10);
            getscore(5);
            total = part1+part2+score;
            put_no();
            put_marks();
            putscore();
            cout<<"Total Score = "<<total<<endl;
        }

};

int main(){
    result r;
    r.display();
    return 0;
}
/*
    objective=Constructor using in the class 
    basiclly it is the same name as the class
*/
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    //creating the constructor
    //Same name as class name 
    //USed to initialize object of the class
    //it is automatically invoked when object are created
    //can't refer this address
    //return value but not return type 
    
    Complex(void);
    Complex(int , int );
    Complex(int );
    void printnum(){
        cout<<"Your number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex(int x){
    a=x;
    b=0;

}
Complex::Complex(void){
    a=10;
    b=13;
    cout<<"Hello world"<<endl;
}
Complex::Complex(int x,int y){// copy construtor

    a=x;
    b=y;
    cout<<"HEllo vraj"<<endl;

}
int main(){
    Complex c,d(3,6);//implicit call
    c.printnum();
    d.printnum();
    //explicit call
    Complex b=Complex(5,7);
    b.printnum();
    Complex a(9);
    a.printnum();
    
    return 0;
}


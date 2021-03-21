/*
objective=Friend function 
*/
#include<iostream>
using namespace std;
class complex{

    int a,b;
       public:
    void set(int n1,int n2){
        a=n1;
        b=n2;
    }
    friend complex sum(complex o1,complex o2);
    void print(){
        cout<<"\nYour number is ::"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex sum(complex o1,complex o2){
    complex o3;
    o3.set((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum1;
    c1.set(3,4);
    c1.print();

    c2.set(5,5);
    c2.print();

    sum1=sum(c1,c2);
    sum1.print();
    return 0;
}
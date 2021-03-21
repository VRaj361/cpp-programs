/*
motive=swapping the values using the friend function

*/
#include<iostream>


using namespace std;
class c2;
class c1{
    int val1;
    friend void exc(c1 &,c2 &);
    public:
    void indata(int a){
        val1=a;
    }
    void dis(void){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
    friend void exc(c1 &,c2 &);
    public:
    void indata(int a){
        val2=a;
    }
    void dis(void){
        cout<<val2<<endl;
    }
};
void exc(c1 & x,c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
//sorting 
}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(44);

    oc2.indata(66);

    exc(oc1,oc2);
    cout<<"The value of c1 after exchange become";
    oc1.dis();
    cout<<"The value of c2 after exchange become";
    oc2.dis();
    return 0;
}
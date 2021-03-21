/*
    Author:--Vraj Patel
    Objective:--
    DOC:--
*/
#include<iostream>
using namespace std;
class  em{
    static int counter;
    int id;
    public:
    void sdata();
    void gdata();
    
    static void gdata1(void){
    cout<<counter;
} 
    

    
};
void em:: sdata(){
        cout<<"enter the id:"<<endl;
        cin>>id;
        counter++;
    }   
void em:: gdata(){
    cout<<counter<<endl;
        cout<<"The id of the employees is ::"<<id<<" and the number is ::"<<counter<<endl;
    }

    

int em::counter=1000;//default value is 0
int main (){
       em vraj,vr;
       vraj.sdata();
    //    if i am taking the vraj as second argument so the count variable is already increment it but i can not control at the second variable 
       vraj.gdata();
       em::gdata1();
       vr.sdata();
       vr.gdata();
       em::gdata1();
return 0;
}
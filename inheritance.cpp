/*
    Author:--Vraj Patel
    Objective:--
    DOC:--
*/
#include<iostream>
using namespace std;
//base class
class  emp{
    
      public:
        int id;
      
      float salary;
        emp(int i){
            id=i;
            salary=34;
        }
        emp(){}
};
class pro:public emp{
    public:
    int languagecode;
    pro(int i){
        id=i;
        languagecode=9;}
    //int langauagecode=9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
        emp vraj(1),patel(2);
        cout<<vraj.salary<<endl;
        cout<<patel.salary<<endl;
        
        pro vra(10);
        cout<<vra.languagecode<<endl;
        cout<<vra.id<<endl;
        vra.getdata();//if i can access the member of the private base class then the derived class declare as the public 

return 0;
}
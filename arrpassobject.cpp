/*
    objective=motive in arr object and passing object
*/
#include<iostream>
using namespace std;
class emp{
    int id;
    int salary;
    public:
    void setid(){

        salary=122;
        cout<<"Enter the employee id:"<<endl;
        cin>>id;
    }
    void getid(){

        cout<<"The employee id is "<<id<<endl;
    }

};
int main(){
      emp f[100];
      for (int i = 0; i < 4; i++)
      {
          f[i].setid();
          f[i].getid();
      }
      
//    emp vraj,vr;
//    vraj.setid();
//    vraj.getid();
//    vr.setid();
//    vr.getid();
    return 0;
}
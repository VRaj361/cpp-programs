/*
motive=Static data members
*/
#include<iostream>
using namespace std;
class  emp{
    int id;
    static int count;//static value count at only ones
    // i can not declare count with the 0 because static will be understand
    // static is normally use for the data which is get it 
    // it can not increment directly 

    public:
    void setdata(void){
        cout<<"\nEnter the id:"<<count+1<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"\nThe value is employees:"<<id<<" The count value is "<<count;

    }
    static void getcount(void){
        //cout<<id; because of the static data menber here the id is not the static member
     cout<<"The value of the getcount  ::"<<count;   
    }
};
int emp::count=1000;
int main(){
    emp vraj,vra,vr;
    vraj.setdata();
    vraj.getdata();
    emp::getcount();
    vr.setdata();
    vr.getdata();
    // emp::getcount();
    vra.setdata();
   vra.getdata();
//    emp::getcount();
    return 0;
}
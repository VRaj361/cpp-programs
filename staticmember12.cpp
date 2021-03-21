/*
    Author:--Vraj Patel
    Objective:--
    DOC:--
*/
#include<iostream>
using namespace std;
class  student{
    int s_id;
    char name[30];
    static int counter;
    public:
    void scan(){
        cout<<"Enter the name of student::";
        cin>>name;
        cout<<"Enter the S_id::"<<endl;
        cin>>s_id;
        counter++;
    }
    void print(){
        cout<<"The name is ::"<<name<<" and the student id is ::"<<s_id<<endl;
          }
    static void getc(){
        cout<<"This is the Counter ::"<<counter<<endl;
    }
};
int student::counter;
int main(){
       student s1,s2,s3;
        s1.scan();
        s1.print();
        student::getc();
        s2.scan();
        s2.print();
        student::getc();
        s3.scan();
        s3.print();
        student::getc();
return 0;
}
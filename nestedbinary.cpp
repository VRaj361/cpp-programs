/*
    Author:--Vraj Patel
    Objective:Binary number complement
    DOC:10.48 19 03 2021
*/
#include<iostream>
#include<string>
using namespace std;
class  Binary{
    string s;
    public:
    void enter();
    void check();
    void complement();
    void display();
};
void Binary::  enter(){
    cout<<"Enter the binary value::"<<endl;
    cin>>s;
}
void Binary::  check(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Enter the Valid Binary Number ::"<<endl;
            exit(0);
        }
    }
}
void Binary::  complement(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void Binary::  display(){
    cout<<"This is the Display part::"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);    
    }
    cout<<endl;
}
int main(){
     Binary b;
     b.enter();
     b.check();
     b.complement();
     b.display();

return 0;
}
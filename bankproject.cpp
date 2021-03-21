/*
    Author:--Vraj Patel
    Objective:--
    DOC:--
*/
#include<iostream>
#include<string.h>
using namespace std;
class  bank{
    int bid;
    char name[30];
    public:
        bank(){
            cout<<"\nWelcome to the my bank::\n";
        }
        void scanbankdetails(){
            cout<<"\nEnter tjhe Bid::\n";
            cin>>bid;
            cout<<"\nEnter the name of the bank::\n";
            cin>>name;
        }
        void displaybankdetails(){
            cout<<bid<<endl<<name<<endl;
        }
};
class acc:public bank{
    float balance,wamount,damount;
    public:
    acc(){
        balance=10000;
    }
    void deposit(){
        cout<<"\nPlease enter the amount you want to deposit::\n";
        cin>>damount;
        if(damount<=0){
            cout<<"\nPlease do not enter the amount which is equal and less than zero::\n";
        }
        else{
            balance=balance+damount;
        }//else
    }//depostit
    void withdraw(){
        float tempbalance;
        cout<<"\nPlease enter the amount you want to withdraw::\n";
        cin>>wamount;
        tempbalance=balance-wamount;
        if(wamount<=0){
            cout<<"Please do not enter the amount ::\n";
        }
        else{
            balance=balance-wamount;
        }//else
    }
    void display(){
        cout<<balance;
    }
};
class cus:public acc{
    int cid;
    char name[30];
    char uname[30];
    char pass[30];
    public:
    cus(){
        cid=8888;
        strcpy(uname,"vr");
        strcpy(pass,"ad");
        strcpy(name,"pat");
    }
    int login(char *user,char *password){
        if(strcmp(user,uname)==0 && strcmp(password,pass)==0){
            return 1;
        }else{
            return 0;
        }
    }
};
int main(){
    int ch;
    cus obj;
    char user[30];
    char password[30];
    int ch1;
    int x;
    while(1){
        main:
        cout<<"\n1 for login::\n";
        cout<<"\n2 for exit::\n";
        cout<<"\nEnter the choice ::\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
        cout<<"\nEnter the user name::\n";
        cin>>user;
        cout<<"\nEnter the password::\n";
        cin>>password;
        x=obj.login(user,password);
        if(x==0){
            cout<<"\nInavalid\n";
        }
        else{
            loginsuc:
            cout<<"\n1 for deposit::\n";
            cout<<"\n2 for withdraw::\n";
            cout<<"\n3 for check balance::\n";
            cout<<"\nEnter the choioce::\n";
            cin>>ch1;
            switch (ch1)
            {
            case 1:
            obj.deposit();
            break;
            case 2:
            obj.withdraw();
            break;
            case 3:
            obj.display();
            break;
            case 4:
            goto main;
            }//inner switch
            goto loginsuc;
        }
        case 2:
        exit(0);
        }//end of switch
    
    
    }//end of while

return 0;
}
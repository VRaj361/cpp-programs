#include<iostream>

using namespace std;
int balance=10000;
class admin{

    public:
    void deposite(void);
 void withdraw(void);    

};
class user{
public:
    void showbalance(void);    


};
void admin::deposite(void){
 int num;
 cout<<"\nEnter the value of deposit::"<<endl ;
 cin>>num;
 cout<<"\nYOu have deposit :: "<<num<<" Rupees"<<endl;
 balance=balance+num;
   
}
void admin::withdraw(void){
    int num1,balancetemp;
    cout<<"\nEnter the value which you can withdraw it::"<<endl;
    cin>>num1;
   // cout<<"\nYou are withdraw :: "<<num1<<" Rupees"<<endl;
    balancetemp=balance-num1;
    if(balancetemp<10000)
    {
        cout<<"\n10000 is the minimum balance which you will required in the bank acoount"<<endl;
        cout<<"\nYou can't get the money"<<endl;  
       void  showbalance();  
    }
    else{
    
     balance=balancetemp; 
     cout<<"your current balance is :: "<<balance;  
     void showbalance();
    }
}
void user::showbalance(void){
 cout<<balance <<" is your current balance"<<endl;   

}
int main(){
    int ch;
    admin a;
    user a1;
    
    cout<<"\nEnter 1 for deposit::";
    cout<<"\nEnter 2 for withdraw";
    cout<<"\nEnter 3 for show the balance:";
    cout<<"\nEnter 4 for exit::";
    while(1){
    cout<<"\nEnter the choice ::";
    cin>>ch;

    switch(ch){
        case 1:    
            a.deposite();
            break;

        case 2:
            a.withdraw();
            break;

        case 3:
            a1.showbalance();
            break;

        case 4:
            exit(0);

    }
    
    
    }    
    return 0;
}
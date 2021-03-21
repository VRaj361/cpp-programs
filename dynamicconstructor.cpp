/*//Error query
    Author:--Vraj Patel
    Objective:--//dynamic memory initailization using constructor 
    DOC:--not required
*/

#include<iostream>
using namespace std;
class  bankdeposit{
    int prin;//principal
    int years;
    float irate;//interestrate
    float revalue;
    public:
        bankdeposit(){}
            bankdeposit(int p,int y,float r);
            bankdeposit(int p,int y,int r);
            void show();
    
};
bankdeposit::bankdeposit(int p,int y,float r){
    prin=p;
    years=y;
    irate=r;
    revalue=prin;
    for (int i=0;i<y;i++){
        revalue=revalue*(1+irate);
    }
}
bankdeposit::bankdeposit(int p,int y,int r){
    prin=p;
    years=y;
    
    revalue=prin;
    irate=float(r)/100;   
    for (int i=0;i<y;i++){
        revalue=revalue * (1+irate);
    }
}
void bankdeposit::show(){
    cout<<"Principle amout was "<<prin<<endl<<" -return value after "<<years<<" is "<<revalue<<endl<<endl;

}
int main(){
    bankdeposit b1,b2,b3;
    int p,y;
    float r;
    int R; 
    cout<<"Enter the principal value,year,rate of interest"<<endl;
    cin>>p>>y>>r;
    b1=bankdeposit(p,y,r);
    b1.show();

    cout<<"Enter the principal value,year,rate of interest"<<endl;
    cin>>p>>y>>R;
    b2=bankdeposit(p,y,R);
    b2.show();
    return 0;
}//in compilation there is show 0 extra 

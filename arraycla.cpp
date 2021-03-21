#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
        void initcounter(void){
            counter=0;
        }
        void setprice(void);
        void disprice(void);
};
void shop::setprice(void){
    cout<<"\nEnter Id of your item::"<<endl;
    cin>>itemid[counter];
    cout<<"\nEnter the price of the item::"<<endl;
    cin>>itemprice[counter];
    counter++;   
}
void shop::disprice(void){
for (int i=0;i<counter ;i++){
        cout<<"The price of the item is ID number == "<<itemid[counter]<<" And the price is =="<<itemprice[counter]<<" rupees";
    }
}

int main(){
    shop onlinebazar;
    onlinebazar.initcounter();
    onlinebazar.setprice();
    onlinebazar.disprice();

    return 0;
}
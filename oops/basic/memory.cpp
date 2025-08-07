#include<iostream>
using namespace std ;
class shop{
  int  itemID[100];
  int  itemprice[200];
  int counter;
  public:

  void initcoutner(void ) { counter =0;} 
  void getprice(void);
  void setprice(void);
  void displayPrice(void);

};
 
 void shop :: setprice(void){
   cout<<"enter Id of your item"<<endl;

   cin>>itemID[counter];
   cout<<"enter price of your item "<<counter+1<<endl;
   cin>>itemprice[counter];
   counter ++;   
                                                                                                                                                                                                                                                                                                                                                                                    

 }
 void shop :: displayPrice(void){
  for (int i = 0; i < counter; i++)
  {
    cout<<"the price of item with id "<<itemID[i]<<" is "<<itemprice[i]<<endl;
  }
  
 }
int main (){
shop dukaan;
dukaan.initcoutner();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.displayPrice();

}
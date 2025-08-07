#include<iostream>
using namespace std;

class Hero{
  // properties
private:
int health ;

public:
char level;
Hero(){
    cout<<"simple constructor called"<<endl;
}
   // paramerterised constructor
Hero(int health , char level){
this->level=level;
this->health=health;
}                        
// copy constructor
// Hero(Hero& temp){
//     this->health=temp.health;
//     this->level=temp.level;
// }
void print(){
    cout<<" health  "<< this->health <<endl;
    cout<< " level " <<this->level<<endl;

}
void setdata(int h,char ch ){
    health = h;
    level = ch;
}
void getdata(){
    cout<<health<<endl;
    cout<<level;
}
// int gethealth(){
//     return health;
// }
// char getLevel(){
//     return level ;
// }
// void setHealth(int h){
//     health = h;
    
// }
// void setLevel(char ch ){
//     level = ch;
// }


};
int main (){

Hero sanjay(70,'a');
sanjay.print();

//  copy constructor

// Hero rahul(sanjay);
// rahul.print();

// Hero rah(sanjay);
// rahul.print();
}
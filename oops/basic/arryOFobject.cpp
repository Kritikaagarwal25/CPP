#include<iostream>
#include<string>
using namespace std ;
class employee{
    int id ;
     string name;
    int salary;
    public:
    void setid(void){
        salary=122;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
         cout<<"enter the name of em ployee"<<endl;
        cin>>name;
    }
    void getid(void){
        cout<<"the id of this employee is : "<<id<<endl;
         cout<<"the name of this employee is : "<<name<<endl;
    }

};
int main (){
// employee anuj,mudit,nakul,abhishek;
// anuj.setid();
// anuj.getid();
employee fb[4];
for(int i=0;i<=4;i++){
  fb[i].setid();
  fb[i].getid();
}

}
#include<iostream>
using namespace std;
class Employee{
int id ;
int count;
private :
void setData(void){
    cout<<"enter the id "<<endl;
    cin>>id;
}
void getData(void){
    cout<<" the id of this employee "<<id<<endl;
}


};
Employee::setData(int id);

int main (){
    Employee  nakul , anuj , mudit;
    nakul.setData();
    nakul.getData();

    anuj.setData();
    anuj.getData();

    mudit.setData();
    mudit.getData();

    return 0;
}
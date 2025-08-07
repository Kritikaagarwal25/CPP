#include<iostream>
using namespace std ;
class student {
 int id;
 char name[10];
 double cgpa;
 public:

 friend void getinfo(student &obj);

 void display(){
    cout<<"student id :"<<id<<endl;
     cout<<"student name :"<<name<<endl;
      cout<<"student cgpa :"<<cgpa<<endl;

 }
};
void getinfo(student &obj){
    cout<<"enter a student id :";
    cin>>obj.id;
    cout<<"enter a student name :";
    cin>>obj.name;
    cout<<"enter a student cgpa :";
    cin>>obj.cgpa;
};
int main (){
    student obj;
    for(int i=0;i<=3;i++){
    getinfo( obj);
     obj.display();
    }
      

}
#include<iostream>
#include<fstream>
using namespace std ;
int main (){
    char name [20];
    int roll ;

     ofstream ofile("student");
    for(int i =1 ; i<=2;i++){
     cout<<"enter the name and roll "<<endl ;    
     cin>>name>>roll;

     ofile<<roll<<name<<endl;
    }

    ofile.close();
    
     ifstream ifile("student");
    
   for(int i =1 ; i<=2;i++){
     ifile>>roll>>name;
      
     cout<<roll<<" "<<name <<endl;
   }

     ifile.close();
}

#include<iostream>
using namespace std;
class emp{
private :
int a;
int b;
public :
int c,d,e;

void setData(int a,int b); // declaration
void getData(){

 cout<<"the value of a is "<<a<<endl;
 cout<<"the value of b is "<<b<<endl;
 
}
};
void emp :: setData(int a1, int b1){ 
a=a1;
b=b1;
};
int main (){
    emp anuj;
     anuj.c=44; 
    anuj.d=23;
    anuj.e=52;
    anuj.setData(5,4);   
    anuj.getData();    
cout<<"the value of c is "<< anuj.c<<endl;
cout<<"the value of d is "<<anuj.d<<endl;
cout<<"the value of e is "<<anuj.e<<endl;
}



//#include<iostream>
// using namespace std;
// class emp{

// public:
// int c,d,e;
// };
// int main (){
//     emp anuj;
//      anuj.c=44;
//     anuj.d=23;
//     anuj.e=52;
//     cout<<"the value of c is "<< anuj.c<<endl;
// cout<<"the value of d is "<<anuj.d<<endl;
// cout<<"the value of e is "<<anuj.e<<endl;
// }
#include<iostream>
using namespace std ;
 
 class complex {
          int a ,b;
          public :
          void setnumber(int n1,int n2){
            a=n1;
            b=n2;
          }
            friend complex sumcomplex(complex o1,complex  o2);
                  
          void getnumber(){
            cout<<"your number is " << a<<" + "<<b<<"i"<<endl;
          }
 };
   complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
    return  o3;
 }

 int main (){
   complex x1,x2,sum ;
      
   x1.setnumber(2,4);
   x1.getnumber();
    
    x2.setnumber(3,5);
    x2.getnumber();
    
    sum=sumcomplex(x1,x2);
    sum.getnumber();


 }
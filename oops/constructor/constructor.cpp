#include<iostream>
using namespace std ;

class complex {
    int a,b;
public:
complex(void); // invoked whenever an object is created

    
  void printnumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
  }

};

complex :: complex(void){
    a=10;
    b=4;
    //  cout<<"HEllo world";
}

int main (){
complex c1,c2;
c1.printnumber();
c2.printnumber();
}

#include<iostream>
using namespace std ;

class complex {
int a ,b ;
public:
complex (int ,int );
void printnumber(){
    cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
}
};

complex :: complex(int x,int y){
          a=x;
          b=y;
}
int main (){
    // implicit cell
complex a(4,5);
// explicit cell
complex b = complex(6,7);
a.printnumber();
b.printnumber();

}
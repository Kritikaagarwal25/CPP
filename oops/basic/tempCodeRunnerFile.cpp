#include<iostream>
using namespace std;

class calculator{
public:
int add(int a,int b){
    return(a+b);
}
int sumrealcomplex(complex ,complex  );
// {
//     // return(o1.a + o2.a);
// }

};

class complex {
int a,b;
friend int calculator :: sumrealcomplex(complex  ,complex  );
public:

   void setnumber (int n1 ,int n2){
    a=n1;
    b=n2;
}
void printnumber(){
    cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
}
};
int calculator :: sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);

}


int main (){
complex o1,o2;
o1.setnumber(2,5);
o2.setnumber(3,6);
calculator calc;
int res = calc.sumrealcomplex(o1,o2);
cout<<"the sum of real part of o1 and o2 is "<<res<<endl;

}

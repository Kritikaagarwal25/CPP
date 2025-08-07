#include<iostream>
using namespace std;
class complex ;
// forward declartion
class calculator{
public:
int add(int a,int b){
    return(a+b);
}
int sumrealcomplex(complex o1,complex o2 );
int sumcompcomplex(complex o1,complex o2 );
// {
//     return(o1.a + o2.a);
// }

};

class complex {
int a,b;
// Individually declaring function as friend 
// friend int calculator :: sumrealcomplex(complex o1 ,complex o2 );


// Aliter: Declaring the entire calculator class as friend

friend class calculator ;
public:

   void setnumber (int n1 ,int n2){
    a=n1;
    b=n2;
}


};
int calculator :: sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);

}
int calculator :: sumcompcomplex(complex o1,complex o2){
    return (o1.b+o2.b);

}


int main (){
complex o1,o2,o3;
o1.setnumber(2,5);
o2.setnumber(3,6);
calculator calc;
int res = calc.sumrealcomplex(o1,o2);
cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
int resc = calc.sumcompcomplex(o1,o2);
cout<<"the sum of complex part of o1 and o2 is "<<resc<<endl;

}

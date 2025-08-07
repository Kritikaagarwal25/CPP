#include<iostream>
using namespace std ;
class Bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    
    public:
    Bankdeposit(){}
Bankdeposit(int p,    int y,float r); // r can be a value like 0.04
Bankdeposit(int p,    int y,float r); // r can be a value like 14
};
Bankdeposit :: Bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue= principal;
}
int main (){


}

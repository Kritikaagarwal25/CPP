#include<iostream>
using namespace std;
int main(){
    char op;
int n1,n2;
cin>>n1>>op>>n2;
switch (op)
{
case '+':
cout<<n1+n2<<endl;
 break;
 case '-':
cout<<n1-n2<<endl;
 break;
 case '*':
cout<<n1*n2<<endl;
 break;
 case '/':
cout<<n1/n2<<endl;
 break;

default:
    break;
}










}
#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the number :";
cin>>n;

if(n%5==0 && n%3==0)
  cout<<"divisible by 5 & 3";
else
    cout<<" not divisible by 5 & 3";
}
// if((n%5==0 || n%3==0) && ( n%15!=0))
//   cout<<"true";
// else
//     cout<<" false";
// }
// #include<iostream>
// using namespace std ;
// int power(int a ,int b ){
//     int x =1;
//  for (int i =1;i<=b;i++){
//              x=x*a;
//     }
//           return x ;
// }
// int main () {
//     int a ,b;
//     cout<<"enter the value of a :";
//     cin >>a;
//     cout<<"enter the value of b :";
//     cin >>b;
//     int p = power (a,b);
//     cout<<a<<"ki power"<<b<<"is equal to = "<<p;


// }

#include<iostream>
using namespace std ;
int power(int a ,int b ){
   if(b==0) return 1;
   int rec= a*power(a,b-1);
   return rec;
}
int main () {
    int a ,b;
    cout<<"enter the value of a :";
    cin >>a;
    cout<<"enter the value of b :";
    cin >>b;
    int p = power (a,b);
    cout<<a<<"ki power"<<b<<"is equal to = "<<p;


}




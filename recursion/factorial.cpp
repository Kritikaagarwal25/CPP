// #include<iostream>
// using namespace std ;
// int factorial ( int n){
// int fact =1;
// for(int i =2;i<=n;i++){
//     fact = fact*i;
// }
//      return fact;
// }

// int main (){
// int n ;
// cout<<"enter the values of n :";
// cin>>n;

//   int fact = factorial (n);
// cout<<fact;
// }

#include<iostream>
using namespace std ;
int factorial ( int n){
    if(n==1) return 1;
int recursion =n*factorial(n-1);
return recursion;

}

int main (){
int n ;
cout<<"enter the values of n :";
cin>>n;

  int fact = factorial (n);
cout<<fact;


}

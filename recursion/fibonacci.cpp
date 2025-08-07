#include<iostream>
using namespace std ;
int fibo (int n ){
    if (n==1 || n==2) return 1;
    int ans1= fibo(n-1);
    int ans2 = fibo(n-2);
   int ans = ans1 + ans2 ;
   return ans ;

}
// 1 1 2 3 5 8 13 21 34 55 89 ......    fibo series
// 1 2 3 4 5 6 7 8 9 10 11 12 .....     numbering 

int main (){
int n ;
cout<<"enter the value of n : ";
cin>>n;

//int fun = fibo(n);
cout<< fibo(n);


}


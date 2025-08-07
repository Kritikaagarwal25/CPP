#include<iostream>
using namespace std ;

int     sum (int n){
// if(n==1 || n==0) return 1;
// int rec = n+sum(n-1);
// return rec;
int fan =1;
for(int i =0;i<=n;i++){
 fan =fan+i;
}
return fan;
}
int  main (){
int n ; 
cin>>n;
int fan=sum(n);

cout<<fan;

}
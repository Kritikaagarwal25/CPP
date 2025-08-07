#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    // 1 3 5 7 9....
// for(int i=1;i<=2*n-1;i+=2)
// cout<<i<<" ";


// 4 7 10 13....
// for(int i=1;i<=3*n-1;i+=3)
// cout<<i<<" ";
int a=4; // exter variable
for(int i=1;i<=n;i++){
 cout<<a<<" ";
a=a+3;
}
   
}
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main (){
//     print(10);
// }

// EXTRA PERAMETER PRINT 1 TO n
// #include<iostream>
// using namespace std;
// void print(int x,int n){
//     if(x>n) return;
//     cout<<x<<endl;
//     print(x+1,n);
// }
// int main (){
// int n; 
// cin>>n;
//     print(1,n);
// }



#include<iostream>
using namespace std ;
int bb(int n ){
    if(n==0) return 1;
    cout<<n<<endl;
int rec = bb(n-1);
return rec;
}
int main ( ){
int n ;
cin>>n;
int num=bb(n);
}
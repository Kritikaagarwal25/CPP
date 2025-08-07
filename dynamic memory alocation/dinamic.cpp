#include<iostream>
using namespace std ;
int main ( ){

int n ;
int *ptr;

cout<<"enter the number   : "<<endl;
cin>>n;

ptr=new int[n];
cout<<"  the number s i a   : "<<endl;
for(int i=0;i<=n;i++){
  cin>>ptr[i];
   
}


cout<<" value in the array   : "<<endl;
for(int i=0;i<=n;i++){
   
   cout<<ptr[i]<<endl;
  

}

}





// int main ( ){
// int a =10;              // s s
// int *p= new int();   // allocate memory in heap
// *p=10;

// delete (p);  // deallocate memory

// p=new int[4];

// delete[2]p;
// *p = Null;


// }
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    if(i!=3 && i!=5)cout<<i<<" ";
   if(i==3) continue;
   if(i==7) continue;
if(i==3 || i==7) continue;
   
    cout<<i<<" ";


    // if(i%2==0)continue;
    // cout<<i<<"  odd"<<endl;                  for odd number s 
    

    

    }
}
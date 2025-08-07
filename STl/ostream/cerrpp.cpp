#include<iostream>
using namespace std ;

int main (){
    float n,d ;
    cin>>n>>d;
    

    if(d==0){
        cerr<<"error : division by zero is not allowed"<<endl;
        return 1 ;
    }
  float  result = n/d;
    cout<<result;


    return 0 ;
}
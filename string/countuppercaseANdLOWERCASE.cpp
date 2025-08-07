#include<iostream>
#include<string>
#include<cctype>
using namespace std ; 

int main(){
    string str = "hello";
    int upper=0;
    int lower=0;

    for(char c  : str){
        if(isupper(c)){
            upper++;
        }else if (islower(c)){
            lower++;
        }
    }
  
 cout<<upper<<endl<<lower<<endl;
}


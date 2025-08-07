#include<iostream>
using namespace std;
int main (){
    int r,n;
    cin>>r;
    n=r*2-1;
    int st=n;  // star 
    int sp = 0;  //space
    int mid = n/2+1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=sp;j++){
          cout<<"  ";
           } 
            for(int k=1;k<=st;k++){
                cout<<"* ";
            }if(i<mid){
                sp++;
                st-=2;
            }else{
               sp--;
                st+=2;

            }           
        
      cout<<endl;
    }
}


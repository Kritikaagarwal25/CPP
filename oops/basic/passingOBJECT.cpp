#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int v1, int v2){
        a=v1;
        b=v2;
    }
    void sumdata(complex o1,complex o2){
        a= o1.a + o2.a ;
        b=o1.b + o2.b;
    }
    void getdata (){
        cout<<"number is "<<a <<"+ " <<b<<"i"<<endl;
    }
};
int main (){
complex c1,c2,c3;
c1.setdata(2,4);
c1.getdata();
c2.setdata(3,5);
c2.getdata();
c3.sumdata(c1,c2);
c3.getdata();


}
#include<iostream>
using namespace std;
void fun(int *x, int *y){
//     int temp = x;
//     x = y;
//    y = temp;
//    return;
swap( *x, *y );
return;

}
int main (){                                                    
int x =33;
int y = 22;
cout<<x<<" "<<y<<endl;


fun(&x,&y);
cout<<x<<" "<<y<<endl;
}
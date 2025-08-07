#include<iostream>
using namespace std ;

class point {
int x,y ;
public :

point (int a ,int b ){
    x=a;
    y=b;
}

    void displaypoint( );
// void displaypoint(){
//     cout<<"the point is ("<<x<<","<<y<<")"<<endl;
// }
};
void point ::  displaypoint( ){
    cout<<"the point is ("<<x<<","<<y<<")"<<endl;
}

int main (){
point p1(1,1);
p1.displaypoint();


point p2(4,14);
p2.displaypoint();


}

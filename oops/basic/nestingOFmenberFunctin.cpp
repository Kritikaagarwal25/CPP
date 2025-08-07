#include<iostream>
#include<string>
using namespace std;
class binary {
string s ;
public:
void read (void);
void chk_bin(void);
void once_compliment(void);
void display(void);
};
void binary :: read (void){
    cout<<"enter the binary value :";
    cin>>s;
}
void binary ::  chk_bin(void){
for ( int i = 0; i < s.length()  ; i++)
{
    if(s.at(i)!='0' && s.at (i)!='1'){
        cout<<"this is not binary number ";
        exit(0);
    }
}
}
void binary ::once_compliment(void ){
    for ( int i = 0; i < s.length()  ; i++)
{
    if(s.at(i)=='0'){
        s.at(i)='1';
        
    }
    else{
        s.at(i)='0';

    }
}
}
void binary ::display(void){
    cout<<"display  binary number :"<<endl;
     for ( int i = 0; i < s.length()  ; i++)
{
    cout<<s.at(i); 
}
cout<<endl;
}
int main ( ){
binary b ;
b.read();
b.chk_bin();
b.display();
b.once_compliment();
b.display();

return 0 ;
}
#include<iostream>
using namespace std  ;
class book{
private:
char book_name[10];
string  name;
int id ;
float price;
  public:
  // void setdata();
void getdata(){
   cout<<"enter a book name :";
     cin>>book_name;
    cout<<"enter a author name :";
     cin>>name;
     cout<<"enter a book id :";
    cin>>id;
     cout<<"enter a price :";
    cin>>price;
}
  void display(){
      cout<<" book name: "<<book_name<<endl;  
     cout<<" author name: "<<name<<endl;
     cout<<"book id :"<<id<<endl;
      cout<<" book price : "<<price<<endl;
  }
};
// void book:: getdata(){
//     cout<<"enter a book name :";
//     cin>>book_name;
//     cout<<"enter a author name :";
//     cin>>name[10];
//      cout<<"enter a book id :";
//     cin>>id;
//      cout<<"enter a price :";
//     cin>>price;
// };
// void book :: display(){
//      cout<<" book name: "<<book_name<<endl;
//      cout<<" author name: "<<name<<endl;
//      cout<<"book id :"<<id<<endl;
//       cout<<" book price : "<<price<<endl;
// };
int main(){
  book c;
    // c1.setdata();
    c.getdata();
   c.display();


}
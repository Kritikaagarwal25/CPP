#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val,node* next1) : data(val),next(next1){};
    node(int val) : data(val),next(nullptr){};
};
void print(node* head){
    while(head){
    cout<<head->data<<" ";
    head=head->next;
    }
}
node* CreateLL(node* head,vector<int>v){
    if(head==nullptr)return nullptr;
for(int i=1;i<v.size();i++){
    head->next=new node(v[i]);
    head=head->next;
}
return head;
}
int main(){
    vector<int>v={1,2,3,4,5};
    node*head=new node(v[0]);

    CreateLL(head,v);
    print(head);
}
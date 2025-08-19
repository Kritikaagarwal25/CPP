#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;

    node(int val,node*next1) :data(val),next(next1){}
    node(int val): data(val),next(nullptr){}
};
node* createLL(node*head,vector<int>v){
    node*temp=head;
    for(int i=1;i<v.size();i++){
        temp->next=new node(v[i]);
        temp=temp->next;
    }

}
node* removehead(node* head){

    head=head->next;
    return head ;
    
}
void print(node* head){
    while(head){
    cout<<head->data<<" ";
    head=head->next;
    }
}
int main(){
    vector<int>v={1,2,3,4,5};

    node* head=new node(v[0]);
    createLL(head,v);
    
    node*ans=removehead(head);
    
    print(ans);
}
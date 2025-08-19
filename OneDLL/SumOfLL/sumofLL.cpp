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
node* CreateLL(vector<int>v){
    
    node* head=new node(v[0]);
    node*temp=head;
    if(head==nullptr)return nullptr;
    for(int i=1;i<v.size();i++){
    temp->next=new node(v[i]);
    temp=temp->next;
}
return head;
}
node*SumOfLL(node*head1,node*head2){
    node*dummy=new node(-1);
    node* t1=head1;
    node* t2=head2;
    int carry=0;
    node*curr=dummy;
    while(t1||t2){
        int sum=carry;
        if(t1)sum+=t1->data;
        if(t2)sum+=t2->data;

        node* newnode=new node(sum%10);
        carry=sum/10;
        curr->next=newnode;
        curr=newnode;
        
        if(t1){
            t1=t1->next;
        }
        if(t2){
            t2=t2->next;
        }
    }
    if(carry){
        node* newnode2= new node(carry);
        curr->next=newnode2;
    }
    return dummy->next;
}
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>v2={6,6,7,8,9,9,3};
    node*head1=CreateLL(v);
    node*head2=CreateLL(v2);
    node*ans=SumOfLL(head1,head2);
    print(ans);
}
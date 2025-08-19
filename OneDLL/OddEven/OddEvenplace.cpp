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
node*OddEven(node*head){
    vector<int>v;
    node*temp=head;
    while(temp&&temp->next){
        v.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp){
        v.push_back(temp->data);
    }
    temp=head->next;
    while(temp&&temp->next){
        v.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp){
        v.push_back(temp->data);
    }
    node*ans=CreateLL(v);
    return ans;
}
int main(){
    vector<int>a={1,2,3,4,5,6};
   
    node*head1=CreateLL(a);
   
    node*ans=OddEven(head1);
    print(ans);
}
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

    node(int val,node*next1) :data(val),next(next1){}
    node(int val): data(val),next(nullptr){}
};
node* createLL(vector<int>v){
    node*head=new node(v[0]);
    node*temp=head;
    for(int i=1;i<v.size();i++){
        temp->next=new node(v[i]);
        temp=temp->next;
    }
return head;
}
void print(node* head){
    while(head){
    cout<<head->data<<" ";
    head=head->next;
    }
}
node* removeKthelement(node* head,int k){
    node* prev=nullptr;
    node* temp=head;
    int cnt=0;
while(temp){
    cnt++;
    if(cnt==k){
        prev->next=temp->next;
        delete temp;
        break;
    }
prev=temp;
temp=temp->next;
}

        

return head;
}
int main(){
    vector<int>v={1,2,3,4,5};

   node* head=createLL(v);
   
    
   node*ans= removeKthelement(head,2);
  
   print(ans);


}
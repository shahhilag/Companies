#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

struct Node
{
    int data;
    Node * next;
};

Node * head=NULL;
Node * swapK(Node * head,int n,int K)
{
    if(K>n) 
    {
       return head;
    }
   Node *first=head;
   Node *second=head;
   Node *temp;
   Node *fprev=NULL;
   Node *lprev=NULL;
   for(int i=0;i<K-1;i++){
       fprev=first;
       first=first->next;
   } 
   for(int i=0;i<n-K;i++){
       lprev=second;
       second=second->next;
   } 
   if(K==1){
       lprev->next=first;
       second->next=first->next;
       first->next=NULL;
       return second;
   }
   if(K==n){
       fprev->next=second;
       first->next=second->next;
       second->next=NULL;
       return first;
   }
   else{
       fprev->next=second;
       lprev->next=first;
       temp=first->next;
       first->next=second->next;
       second->next=temp;
       return head;
   }
}

void push_back(int data)
{
    Node * temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        Node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}  
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        push_back(data);
    } 
    
    Node * root=head;
    Node * ans=swapK(root,n,k);
    while(ans!=NULL)
    {
        cout<<ans->data<<" ";
        ans=ans->next;
    }

     return 0;
} 
#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;
};

node* alternateMerge(node * root1, node* root2){
     node * head1=root1;
     node * temp2=root2;
     node * temp1=head1;
     while(temp1!=NULL and temp2!=NULL)
     {
       node * newNode=temp2;
       temp2=temp2->next;
       newNode->next=NULL;
     
         if(temp1->next==NULL)
         {
             temp1->next=newNode;
             break;
         }
         newNode->next=temp1->next;
         temp1->next=newNode;
         temp1=newNode->next;
     }
     root1=head1;
     root2=temp2;
     return root1; 
    
}

void push_back(int data)
{
    node * head=NULL;
    node * temp=new node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}   
int main()
{
     int t;
     cin>>t;
     node * head=NULL;
     while(t--)
     {
         int n;
         cin>>n;
         for(int i=0;i<n;i++)
         {
            int data;
            cin>>data;
            push_back(data);
         } 
         node * root1=head;
         node * temp=head;
         int m;
         cin>>m;        
         node * root2=temp;
         for(int i=0;i<m;i++)
         {
              int data;
              cin>>data;
              push_back(data);
         }
         for(int i=0;i<n;i++)
         {
              root2=root2->next;
         }
         node * ans=alternateMerge(root1,root2); 
         while(ans!=NULL)
         {
              cout<<ans->data;
              ans=ans->next;
         }
     }
     return 0;
}
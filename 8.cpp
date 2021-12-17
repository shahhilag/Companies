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

Node * head = NULL;

void insert(int data,int pos)
{
    Node * temp=new Node();
    temp->data=data;
    Node * p=head;
    if(pos==0)
    {
         Node * temp=head;
          head=head->next;
          temp->next=NULL;
          delete temp;
          return;
    }
    for(int i=1;i<=pos-1;i++)
    {
        p=p->next;
    }    
    temp->next=p->next;
    p->next=temp;
}
void pop_back()
{
    Node * p=head;
    if(p->next==NULL)
    {
        delete p;
        head=NULL;
        return ;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    Node * temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete p;
}

void reorderList(Node * head)
{
     Node * temp=head;
     int size=0;
     Node * h1=head;
     Node * h2=head;
     Node * final=head;
     int after=0;
     while(temp!=NULL)
     {
          temp=temp->next;
          size++;
     }
     int mid=size/2;
     for(int i=0;i<=mid;i++)
     {
          h2=h2->next;
          after++;
     }
     int pos=0;
     Node * helper=h2;
     for(int i=0;i<size-after;i++)
     {
          if(i==0)
          {
               pos=pos+1;
               insert(h2->data,pos);
               h2=h2->next;
          }
          else
          {
               pos=pos+2;
               insert(h2->data,pos);
               h2=h2->next;
          }
         
     }
     for(int i=0;i<size-after;i++)
     {
          pop_back();
     }
     while(final!=NULL)
     {
          cout<<final->data<<" ";
          final=final->next;
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
     dfile();
     int n;
     cin>>n;
     for(int i=0;i<n;i++)  
     {
          int data;
          cin>>data;
          push_back(data);
     }  
     reorderList(head);
     return 0;
}
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

Node * alternateMerge(Node * root1, Node* root2)
{
     Node * a= root1;
     Node * b= root2;
     Node * temp;
     Node * atemp=a;
     Node * btemp=b;
     int asize=0;
     int bsize=0;
     int counter=0;
     while(btemp!=NULL)
     {
          bsize++;
          btemp=btemp->next;
     }
     cout<<bsize<<endl;
     while(atemp!=b)
     {
          asize++;
          atemp=atemp->next;
     }
     int pos=0;
     while(pos<=asize)
     {          
          if(counter==0)
          {
               temp=a->next;
               pos=pos+1;
               insert(b->data,pos);
               b=b->next;
               counter++;
          }
          else
          {
               pos=pos+2;
               insert(b->data,pos);
               counter++;
               b=b->next;
          }   
     }
     for(int i=0;i<bsize;i++)
     {
          pop_back();
     }
     return a;
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
     int t;
     cin>>t;
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
         Node * root1=head;
         Node * temp=head;
         int m;
         cin>>m;        
         Node * root2=temp;
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
         Node * ans=alternateMerge(root1,root2); 
         while(ans!=NULL)
         {
              cout<<ans->data<<"->";
              ans=ans->next;
         }
     }
     return 0;
}
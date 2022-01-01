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

void push_front(int data)
{
    Node * temp=new Node();
    temp->data=data;
    temp->next=head;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        head=temp;   
    }
}

void insert(int data,int pos)
{
    Node * temp=new Node();
    temp->data=data;
    Node * p=head;
    if(pos==0)
    {
        push_front(data);
        return;
    }
    for(int i=1;i<=pos-1;i++)
    {
        p=p->next;
    }    
    temp->next=p->next;
    p->next=temp;
}

void print()
{
    
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next; 
    }
}

void pop_front()
{
    Node * temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
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
        //  insert(5,1);
        //  insert(8,2);
        //  pop_front();
         print();
         cout<<endl;
     }
     return 0;
}
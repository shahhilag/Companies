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

Node * head= NULL;

void reverse()
{
    Node * c=head;
    Node * p=NULL;
    Node * n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
   head=p;
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

void print()
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next; 
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
         reverse();
         print();
         cout<<endl;
     }
     return 0;
}
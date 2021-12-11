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

int kthLastElement(Node * head,int k){
    Node * temp=head;
    Node * temp1=head;
    int a=0;
    int size=0;
    while(temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    
    for(int i=0;i<=size-k;i++)
    {
        a=temp1->data;
        temp1=temp1->next;
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
         int k;
         cin>>k;
         for(int i=0;i<n;i++)
         {
            int data;
            cin>>data;
            push_back(data);
         } 
         int ans=kthLastElement(head,k);
         cout<<ans<<endl;
         print();
         cout<<endl;
     }
     return 0;
}
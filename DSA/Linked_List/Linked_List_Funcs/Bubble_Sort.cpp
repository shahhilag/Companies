#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 
node * head=NULL;
node* bubble_sort_LinkedList_itr(node* head)
{
    node * temp=head;
    int size=0;
    //Calculate size
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    
    for(int i=0;i<size-1;i++)
    {
        node * p=NULL;
        node * current=head;
        node * n;
        while(current!=NULL and current->next!=NULL)
        {
            if(current->data>current->next->data)
            {
                if(p==NULL)
                {
                    n=current->next;
                    current->next=n->next;
                    n->next=current;
                    head=p=n;
                } 
                else
                {
                    n=current->next;
                    p->next=n;
                    current->next=n->next;
                    n->next=current;
                    p=n;
                }              
            }
            else
            {
                n=current->next;
                p=current;
                current=n;
            }
        }
    }
    return head;
}
 

void push_back(int data)
{
    node * temp=new node(data);
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
         node * ans = bubble_sort_LinkedList_itr(head);
         while(ans!=NULL)
         {
             cout<<ans->data<<" ";
             ans=ans->next;
         }
     }
     return 0;
}
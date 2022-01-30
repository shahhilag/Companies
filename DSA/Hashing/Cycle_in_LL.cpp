#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

class Node 
{
    public:
        int data;
        Node * next;
        Node(int data)
        {
            this->data=data;
            next=NULL;
        }
};
Node * head;

bool containsACycle(Node * head)
{
    unordered_map<Node *,bool> hashtable;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(hashtable.count(temp)!=0)
        {
            return true;
        }
        hashtable[temp]=true;
        temp=temp->next;
    }
    return false;
}

void push_back(int data)
{
    Node * temp=new Node(data);
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
    cout<<containsACycle(head)<<endl;
     
     return 0;
}
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
    Node *next;
};
Node * head=NULL;
Node * swapNode(Node * head,int k)
{
    Node * temp=head;
    Node * temp1=head;
    vector<int> v;
    int size=0;
    //Convert linked list to vector

    while(temp!=NULL)
    {
        v.push_back(temp->data);
        size++;
        temp=temp->next;
    }
    // cout<<v[k-1]<<endl;
    // cout<<v[(size)-k]<<endl;
    swap(v[k-1],v[(size)-k]);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<v[i];
    // }
    int i=0;
    while(temp1!=NULL)
    {
        temp1->data=v[i];
        i++;
        temp1=temp1->next;
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
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int data;
            cin>>data;
            push_back(data);
        } 
        Node * ans=swapNode(head,k);    
        print();

     }
     return 0;
}
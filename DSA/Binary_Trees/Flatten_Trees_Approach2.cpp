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
    Node * right;
    Node * left;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

Node * buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    Node * n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}

void flatten(Node * root)
{
    stack<Node *> s;
    s.push(root);
    while(!s.empty())
    {
        Node * cur=s.top();
        s.pop();
        if(cur->right) s.push(cur->right);
        if(cur->left) s.push(cur->left);
        if(!s.empty()) cur->right=s.top();
        cur->left=NULL;
    }
}

int main()
{
    dfile();
    Node * root=buildTree();
    flatten(root);
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->right;
    }
    return 0;
}
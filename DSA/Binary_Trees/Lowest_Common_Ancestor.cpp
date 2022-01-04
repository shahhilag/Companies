#include<bits/stdc++.h>
using namespace std;

//Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

Node * lowest(Node * root,Node * p,Node * q)
{
    if(root==NULL||root==p||root==q)
    {
        return root;
    }
    Node * left=lowest(root->left,p,q);
    Node * right=lowest(root->right,p,q);
    if(left==NULL)
    {
        return right;
    }
    else if(right==NULL)
    {
        return left;
    }
    else
    {
        return root;
    }
}

int main()
{
    dfile();
    Node * root=buildTree();
    Node * p=root->left->left;
    Node * q=root->left->right->left;
    cout<<lowest(root,p,q)->data<<endl;
    return 0;
}
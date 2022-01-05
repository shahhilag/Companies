#include<bits/stdc++.h>
using namespace std;

//Input = 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

void printTree(Node * root)
{
     queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node * temp=q.front();
        if(temp==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}   

void rebuildTree(Node * root)
{
    if(root==NULL) return;
    int child=0;
    if(root->left) child+=root->left->data;
    if(root->right) child+=root->right->data;
    if(child>=root->data) root->data=child;
    else
    {
        if(root->left) root->left->data=root->data;
        if(root->right) root->right->data=root->data;
    }
    rebuildTree(root->left);
    rebuildTree(root->right);
    int tot=0;
    if(root->left) tot+=root->left->data;
    if(root->right) tot+=root->right->data;
    if(root->left or root->right) root->data=tot;
}

int main()
{
    dfile();
    Node * root=buildTree();
    rebuildTree(root);
    printTree(root);
    return 0;
}
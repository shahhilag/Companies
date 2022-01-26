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

Node * findLastRight(Node * root)
{
    if(root->right==NULL) return root;
    else return findLastRight(root->right);
}

Node* helper(Node * root)
{
    if(root->left==NULL) return root->right;
    else if(root->right==NULL) return root->left;
    Node * rightChild=root->right;
    Node * lastRight=findLastRight(root->left);
    lastRight->right=rightChild;
    return root->left;
}

Node * deleteNode(Node * root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return helper(root);
    }
    Node * dummy=root;
    while(root!=NULL)
    {
        if(root->data>key)
        {
            if(root->left!=NULL and root->left->data==key)
            {
                root->left=helper(root->left);
                break;
            }
            else
            {
                root=root->left;
            }
        }
        else
        {
            if(root->right!=NULL and root->right->data==key)
            {
                root->right=helper(root->right);
            }
            else
            {
                root=root->right;
            }
        }
    }
    return dummy;
}

int main()
{
    dfile();
    Node * root=buildTree();

    return 0;
}
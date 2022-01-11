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

Node * insert(Node * &root,int data)
{
    if(root==NULL)
    {
        return new Node(data);
    }
    if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}

bool isBST(Node * root,int min,int max)
{
    if(root==NULL) return true;

    //false if this node violates the min/max constraint
    if(root->data<min||root->data>max) return false;

    // otherwise check the subtrees recursively,tightening the min or max constraint
    return isBST(root->left,min,root->data) and isBST(root->right,root->data,max);
}

bool isBSTmain(Node * root)
{
    return isBST(root,INT_MIN,INT_MAX);
}

void printInorder(Node * root)
{
    if(root==NULL) return;
    printInorder(root->left);
    cout<<root->data<<",";
    printInorder(root->right);
}

int main()
{
    dfile();
    Node * root=NULL;
    int arr[]={8,100,10,11,1,6,14,4,7,13};
    for(int x:arr)
    {
        root=insert(root,x);
    }
    //printInorder(root);
    //cout<<endl;
    cout<<isBSTmain(root)<<endl;
    return 0;
}
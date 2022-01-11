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

Node * insert(Node * root,int data)
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

void mirror(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    struct Node* temp;
    /* swap the pointers in this node */
    temp = root->left;
    root->left = root->right;
    root->right = temp;
         
    /* do the subtrees */
    mirror(root->left);
    mirror(root->right);
    
}

void printInorder(Node * root)
{
    if(root==NULL) return;
    printInorder(root->left);
    cout<<root->data<<",";
    printInorder(root->right);
}

Node * insert(Node * root)
{
    int data;
    cin>>data;
    if(root==NULL) return new Node(data);
    if(data>root->data) root->left=insert(root->left);
    if(data>root->data) root->right=insert(root->left);
}

int main()
{
    dfile();
    Node * root=NULL;
    int arr[]={8,3,10,11,1,6,14,4,7,13};
    for(int x:arr)
    {
        root=insert(root,x);
    }
    //cout<<endl;
    mirror(root);
    printInorder(root);
    return 0;
}
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

bool search(Node * root,int value)
{
    if(root==NULL) return false;
    if(root->data==value) return true;
    if(value<root->data)   return search(root->left,value);
    if(value>root->data)  return search(root->right,value);
}

Node * insert(Node * root,int key)
{
    if(root==NULL)
    {
        return new Node(key);
    }
    if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
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
    int arr[]={8,3,10,11,1,6,14,4,7,13};
    for(int x:arr)
    {
        root=insert(root,x);
    }
    printInorder(root);
    cout<<endl;
    int value;
    cin>>value;
    cout<<search(root,value)<<endl;
    return 0;
}
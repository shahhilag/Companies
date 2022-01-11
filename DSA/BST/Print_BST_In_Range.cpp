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

void printInRange(Node * root,int k1,int k2)
{
    if(root==NULL) return;

    if(root->data>=k1 and root->data<=k2)
    {
        //Call on both sides
        printInRange(root->left,k1,k2);
        cout<<root->data<<",";
        printInRange(root->right,k1,k2);
    }
    else if(root->data>k2)
    {
        //If the given data is greater than the key k2
        printInRange(root->left,k1,k2);
    }
    else
    {
        //root->data<k1
        printInRange(root->right,k1,k2);
    }
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
    // int value;
    // cin>>value;
    // cout<<search(root,value)<<endl;
    printInRange(root,5,12);
    return 0;
}
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

int findCeil(Node * root,int key)
{
    int ceil=-1;
    while(root)
    {
        if(root->data==key)
        {
            ceil=root->data;
            return ceil;
        }
        if(key>root->data)
        {
            root=root->right;
        }
        else
        {
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
}

Node * insert(Node * &root,int key)
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

void printInorder(Node * &root)
{
    if(root==NULL) 
    {
        return;
    }
    printInorder(root->left);
    cout<<root->data<<",";
    printInorder(root->right);
}

int main()
{
    dfile();
    Node * root=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int value;
        cin>>value;
        root=insert(root,value);
    }
    printInorder(root);
    cout<<endl;
    int key;
    cin>>key;
    cout<<findCeil(root,key);
    return 0;
}
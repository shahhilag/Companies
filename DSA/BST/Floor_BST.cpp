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

int findFloor(Node * root,int key)
{
    int floor=-1;
    while(root)
    {
        if(root->data==key)
        {
            floor=root->data;
            return floor;
        }
        if(key>root->data)
        {
            floor=root->data;
            root=root->right;
        }
        else
        {
            root=root->left;
        }
    }
    return floor;
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
    cout<<findFloor(root,key);
    return 0;
}
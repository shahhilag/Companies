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
        Node * left;
        Node * right;
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
    Node * n= new Node(d);
    //Build left subtree
    n->left=buildTree();
    //Build right subtree
    n->right=buildTree();
    return n;
}

void printInorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main()
{
     dfile();
     Node * root=buildTree();
     printInorder(root);
     return 0;
}
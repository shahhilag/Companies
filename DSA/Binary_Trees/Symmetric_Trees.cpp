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

bool isSymmetricHelp(Node * lroot,Node* rroot)
{
    if(lroot==NULL||rroot==NULL)
    {
        return lroot==rroot;
    }
    if(lroot->data!=rroot->data) return false;
    return isSymmetricHelp(lroot->left,rroot->right) and isSymmetricHelp(lroot->right,rroot->left);
}

bool isSymmetric(Node * root)
{
    return root==NULL||isSymmetricHelp(root->right,root->left);
}

int main()
{
    dfile();
    Node * root= buildTree();
    cout<<isSymmetric(root)<<endl;
    return 0;
}
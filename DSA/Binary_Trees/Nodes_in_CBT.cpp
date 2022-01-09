#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

//Input:1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

int findHeightLeft(Node * root)
{
    int height=0;
    while(root)
    {
        height++;
        root=root->left;
    }
    return height;
}

int findHeightRight(Node * root)
{
    int height=0;
    while(root)
    {
        height++;
        root=root->right;
    }
    return height;
}

int countNodes(Node * root)
{
    if(root==NULL) return 0;
    int lh=findHeightLeft(root);
    int rh=findHeightRight(root);
    if(lh==rh) return (1<<lh)-1;//2^h-1
    return 1+countNodes(root->left)+countNodes(root->right);
}

int main()
{
    dfile();
    Node * root=buildTree();
    cout<<countNodes(root)<<endl;
    return 0;
}
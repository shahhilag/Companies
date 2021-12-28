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

int height(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lh=height(root->left);
    if(lh==-1) return -1;
    int rh=height(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return max(lh,rh)+1;
}

bool isBalanced(Node * root)
{
    return height(root)!=-1;
}

int main()
{
    dfile();
    Node * root=buildTree();
    cout<<isBalanced(root)<<endl;
    return 0;
}
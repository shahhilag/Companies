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

int minDepth(Node *root) 
{
    if(root==NULL)
    {
        return 0;
    }    
    int h1=minDepth(root->left);
    int h2=minDepth(root->right);
    return max(h1,h2)+1;
}

int main()
{
     dfile();
     Node * root=buildTree();
     cout<<minDepth(root)<<endl;
     return 0;
}
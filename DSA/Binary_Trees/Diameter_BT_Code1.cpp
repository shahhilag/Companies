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
    Node * n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}

int heightTree(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=heightTree(root->left);
    int h2=heightTree(root->right);
    return max(h1,h2)+1;
}

int diameter(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int D1=heightTree(root->left)+heightTree(root->right);
    int D2=diameter(root->left);
    int D3=diameter(root->right);
    return max(D1,max(D2,D3));
}

int main()
{
     dfile();
     Node * root=buildTree();
     cout<<diameter(root)<<endl;
     return 0;
}
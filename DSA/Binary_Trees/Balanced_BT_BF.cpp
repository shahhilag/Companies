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

int height(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return max(h1,h2)+1;
}

bool check(Node * root)
{
    if(root==NULL)
    {
        return true;
    }
    int l=height(root->left);
    int r=height(root->right);
    if(abs(l-r)>1) return false;
    bool left=check(root->left);
    bool right=check(root->right);
    if(!left||!right) return false;
    return true;
}

int main()
{
     dfile();
     Node * root=buildTree();
     cout<<check(root)<<endl;
     return 0;
}
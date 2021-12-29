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

int height(Node * root,int &diameter)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left,diameter);
    int h2=height(root->right,diameter);
    diameter=max(diameter,h1+h2);
    return max(h1,h2)+1;
}

int diameterBT(Node * root)
{
    int diameter=0;
    height(root,diameter);
    return diameter;
}

int main()
{
    dfile();
    Node * root=buildTree();
    cout<<diameterBT(root)<<endl;   
    return 0;
}
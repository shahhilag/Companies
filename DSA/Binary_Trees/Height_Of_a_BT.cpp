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

//Height of Tree
int height(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    //Calculate height of left subtree
    int h1=height(root->left);
    //Calculate height of right subtree
    int h2=height(root->right);
    return max(h1,h2)+1;
}

int main()
{
     dfile();
     Node * root=buildTree();
     int ans=height(root);
     cout<<ans<<endl;
     return 0;
}
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

int maxi=0;

int findDiameter(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    maxi=max(maxi,lh+rh);
    //Always check if solution is O(N^2) there will be some optimisation in here.
    findDiameter(root->left);
    findDiameter(root->right);
    return maxi;
}

int main()
{
    dfile();
    Node *root=buildTree();
    cout<<findDiameter(root)<<endl;
    return 0;
}
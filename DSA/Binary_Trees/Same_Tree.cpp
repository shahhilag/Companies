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

bool sameTree(Node * rootp,Node * rootq)
{
    if(rootp==NULL || rootq==NULL)
    {
        return rootp==rootq;
    }
    return (rootp->data==rootq->data) and sameTree(rootp->left,rootq->left) and sameTree(rootp->right,rootq->right); 
}

int main()
{
    dfile();
    Node * root1=buildTree();
    Node * root2=buildTree();
    cout<<sameTree(root1,root2);

    return 0;
} 
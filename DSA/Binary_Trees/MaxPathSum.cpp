#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

//Input = 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

int maxPathDown(Node * root,int &maxi)
{
    if(root==NULL)
    {
        return 0;
    }
    //We do max with 0 so that we do not get a negative value
    int left=max(0,maxPathDown(root->left,maxi));
    int right=max(0,maxPathDown(root->right,maxi));
    //To get maximum sum of any path
    maxi=max(maxi,left+right+root->data);
    return max(left,right)+root->data;
}

int maxPathSum(Node * root)
{
    int maxi=INT_MIN;
    maxPathDown(root,maxi);
    return maxi;
}

int main()
{
    dfile();
    Node * root=buildTree();
    cout<<maxPathSum(root)<<endl;
    return 0;
}
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

bool getPath(Node * root,vector<int> &arr,int x)
{
    if(root==NULL)
        return false;
    arr.push_back(root->data);
    if(root->data==x)
    {
        return true;
    }
    //if any of left or right returns true ,return back true
    if(getPath(root->left,arr,x)||getPath(root->right,arr,x))
    {
        return true;
    }
    arr.pop_back();
    return false;
}

vector<int> solve(Node *root,int x)
{
    vector<int> arr;
    if(root==NULL) return arr;
    getPath(root,arr,x);
    return arr;
}

int main()
{
    dfile();
    Node * root=buildTree();
    int x;
    cin>>x;
    vector<int> ans=solve(root,x);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
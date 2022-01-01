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

void rrecursion(Node * root,int level,vector<int> &ans)
{
    if(root==NULL) return;
    if(ans.size()==level) ans.push_back(root->data);
    rrecursion(root->right,level+1,ans);
    rrecursion(root->left,level+1,ans);
}

vector<int> rightView(Node * root)
{
    vector<int> ans;
    rrecursion(root,0,ans);
    return ans;
}

void lrecursion(Node * root,int level,vector<int> &ans)
{
    if(root==NULL) return;
    if(ans.size()==level) ans.push_back(root->data);
    lrecursion(root->left,level+1,ans);
    lrecursion(root->right,level+1,ans);
}

vector<int> leftView(Node * root)
{
    vector<int> ans;
    lrecursion(root,0,ans);
    return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans1=rightView(root);
    for(int x:ans1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> ans2=leftView(root);
     for(int x:ans2)
    {
        cout<<x<<" ";
    }
    return 0;
}
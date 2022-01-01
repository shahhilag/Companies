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

vector<int> bottomView(Node * root)
{
    vector<int> ans;
    if(root==NULL) return ans;
    queue<pair<Node *,int>> q;
    map<int,int> mpp;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        Node * node=it.first;
        int line =it.second;
        mpp[line]=node->data;
        if(node->left)
        {
            q.push({node->left,line-1});
        }
        if(node->right)
        {
            q.push({node->right,line+1});
        }
    }
    for(auto it:mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans=bottomView(root);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
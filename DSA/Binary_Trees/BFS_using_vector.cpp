#include<bits/stdc++.h>
using namespace std;

//Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

vector<vector<int>> levelOrder(Node * root)
{
    vector<vector<int>> ans;
    if(root==NULL)
    {
        return ans;
    }
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++)
        {
            Node * node=q.front();
            q.pop();
            if(node->left!=NULL)
            {
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
} 

int main()
{
    dfile();
    Node * root=buildTree();
    vector<vector<int>> ans=levelOrder(root);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }   
    return 0;
}
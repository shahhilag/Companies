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

vector<vector<int>> verticalOrderTraversal(Node * root)
{
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<Node*,pair<int,int>>> q; 
    q.push({root,{0,0}});
    while(!q.empty())
    {
        auto p=q.front();
        q.pop();
        Node * node=p.first;
        int x=p.second.first,y=p.second.second;
        nodes[x][y].insert(node->data);
        if(node->left)
        {
            q.push({node->left,{x-1,y+1}});
        }
        if(node->right)
        {
            q.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto m:nodes)
    {
        vector<int> col;
        for(auto n:m.second)
        {
            col.insert(col.end(),n.second.begin(),n.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<vector<int>> ans=verticalOrderTraversal(root);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
    }
    return 0;
}
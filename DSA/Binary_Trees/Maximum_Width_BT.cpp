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

int widthBinaryTree(Node * root)
{
    if(!root) return 0;
    int ans=0;
    queue<pair<Node *,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        int size=q.size();
        int mmin=q.front().second;
        int first,last;
        for(int i=0;i<size;i++)
        {
            int cur_id=q.front().second-mmin;
            Node * node=q.front().first;
            q.pop();
            if(i==0) first=cur_id;
            if(i==size-1) last=cur_id;
            if(node->left) q.push({node->left,(cur_id*2)+1});
            if(node->right) q.push({node->right,(cur_id*2)+2});
        }
        ans=max(ans,last-first+1);
    }
    return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    cout<<widthBinaryTree(root)<<endl;
    return 0;
}
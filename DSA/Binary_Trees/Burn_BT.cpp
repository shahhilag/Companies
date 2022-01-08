#include<bits/stdc++.h>
using namespace std;

//Input:1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

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

int findTime(map<Node *,Node *> &mpp,Node * target)
{
    queue<Node *> q;
    q.push(target);
    map<Node *,int> vis;
    vis[target]=1;
    int time=0;
    while(!q.empty())
    {
        int size=q.size();
        int flag=0;
        for(int i=0;i<size;i++)
        {
            auto node =q.front();
            q.pop();
            if(node->left and !vis[node->left])
            {
                flag=1;
                vis[node->left]=1;
                q.push(node->left);
            }
            if(node->right and !vis[node->right])
            {
                flag=1;
                vis[node->right]=1;
                q.push(node->right);
            }
            if(mpp[node] and !vis[mpp[node]])
            {
                flag=1;;
                vis[mpp[node]]=1;
                q.push(mpp[node]);
            }
        }
        if(flag) time++;
    } 
    return time;
}

Node * parentAddress(Node * root,map<Node *,Node *> &mpp,int start)
{
    queue<Node *> q;
    q.push(root);
    Node * res;
    while(!q.empty())
    {
        Node * node=q.front();
        if(node->data==start) res=node;
        q.pop();
        if(node->left)
        {
            mpp[node->left]=node;
            q.push(node->left);
        }
        if(node->right)
        {
            mpp[node->right]=node;
            q.push(node->right);
        }
    }
    return res;
}

int timeToBurn(Node * root,int start)
{
    map<Node *,Node *> mpp;
    Node * target=parentAddress(root,mpp,start);
    int time=findTime(mpp,target);
    return time; 
}

int main()
{
    dfile();
    Node * root=buildTree();
    int start;
    cin>>start;
    cout<<timeToBurn(root,start);
    return 0;
}
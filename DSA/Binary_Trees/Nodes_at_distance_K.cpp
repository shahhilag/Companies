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

//Parents Node identification
void makeParents(Node * root,unordered_map<Node *,Node *> &parent_track,Node * target)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node * current=q.front();
        q.pop();
        if(current->left)
        {
            parent_track[current->left]=current;
            q.push(current->left);
        }
        if(current->right)
        {
            parent_track[current->right]=current;
            q.push(current->right);
        }
    }
}

vector<int> distance(Node * root,Node * target,int k)
{
    unordered_map<Node *,Node *> parent_track;
    makeParents(root,parent_track,target);
    unordered_map<Node *,bool> visited;
    queue<Node *> q;
    q.push(target);  
    visited[target]=true;
    int cur_level=0;
    while(!q.empty())
    {
        int size=q.size();
        if(cur_level==k) break;
        cur_level++;
        for(int i=0;i<size;i++)
        {
            Node * current=q.front();
            q.pop();
            if(current->left and !visited[current->left])
            {
                q.push(current->left);
                visited[current->left]=true;
            }
            if(current->right and !visited[current->right])
            {
                q.push(current->right);
                visited[current->right]=true;
            }
            if(parent_track[current] and !visited[parent_track[current]])
            {
                q.push(parent_track[current]);
                visited[parent_track[current]]=true;
            }
        }
    } 
    vector<int> result;
    while(!q.empty())
    {
        Node * current=q.front();
        q.pop();
        result.push_back(current->data);
    } 
    return result;
}

int main()
{
    dfile();
    Node * root=buildTree();
    Node * target=root->right;
    int k;
    cin>>k;
    vector<int> result=distance(root,target,k);
    for(int x:result)
    {
        cout<<x<<" ";
    }
    return 0;
}
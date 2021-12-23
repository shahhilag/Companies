#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

struct Node {
    int key;
    Node* left, *right;
    Node(int d)
    {
        key=d;
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
    Node * n= new Node(d);
    //Build left subtree
    n->left=buildTree();
    //Build right subtree
    n->right=buildTree();
    return n;
}

int sumBT(Node* root)
{
    int res = 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left)
        {
            q.push(f->left);
        } 
        if(f->right) 
        {
            q.push(f->right);
        }
        res += f->key;
    }
    return res;
}

int main()
{
     dfile();
     Node * root=buildTree();
     int ans=sumBT(root);
     cout<<ans<<endl;
     return 0;
}
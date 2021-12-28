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

vector<int> preOrder(Node * root)
{
    vector<int> preorder;
    if(root==NULL) return preorder;
    stack<Node *>s;
    s.push(root);
    while(!s.empty())
    {
        //As stack is LIFO thus first root->right is called and then root->right is called
        root=s.top();
        s.pop();
        preorder.push_back(root->data);
        if(root->right!=NULL)
        {
            s.push(root->right);
        }
        if(root->left!=NULL)
        {
            s.push(root->left);
        }
    }
    return preorder;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans=preOrder(root);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
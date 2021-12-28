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

vector<int> postOrderTraversal(Node * root)
{
    vector<int> ans;
    stack<Node *> s1,s2;
    s1.push(root);
    while(!s1.empty())
    {
        root=s1.top();
        s1.pop();
        s2.push(root);
        if(root->left!=NULL)
        {
            s1.push(root->left);
        }
        if(root->right!=NULL)
        {
            s1.push(root->right);
        }
    }
    while(!s2.empty())
    {
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans=postOrderTraversal(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
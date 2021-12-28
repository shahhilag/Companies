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

vector<int> inOrderTraversal(Node * root)
{
    stack<Node *> s;
    Node * n=root;
    vector<int> inorder;
    while(true)
    {
        if(n!=NULL)
        {
            s.push(n);
            n=n->left;
        }
        else
        {
            if(s.empty()) break;
            n=s.top();
            s.pop();
            inorder.push_back(n->data);
            n=n->right;
        }
    }
    return inorder;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans=inOrderTraversal(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }   
    return 0;
}
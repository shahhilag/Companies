#include<bits/stdc++.h>
using namespace std;

//Input: 2 7 -1 6 1 -1 -1 11 -1 -1 5 -1 9 4 -1 -1 -1

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

void removeHelper(Node * root,vector<int> &ans)
{
  if(root==NULL) return;
  removeHelper(root->left,ans);
  if((root->left and root->right) or (!root->left and !root->right)) ans.push_back(root->data);
  removeHelper(root->right,ans);
}

vector<int> removeHalfNodes(Node *root)
{
  vector<int> ans;
  removeHelper(root,ans);
  return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans=removeHalfNodes(root);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
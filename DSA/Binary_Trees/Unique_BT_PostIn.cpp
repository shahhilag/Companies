#include<bits/stdc++.h>
using namespace std;

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

Node * buildTreeInPost(vector<int> &postorder,int postStart,int postEnd,vector<int> &inorder,int inStart,int inEnd,map<int,int> &inMap)
{
    if(postStart>postEnd||inStart>inEnd) return NULL;
    Node * root=new Node(postorder[postEnd]);
    int inRoot=inMap[root->data];
    int numsLeft=inRoot-inStart;
    root->left=buildTreeInPost(postorder,postStart,postStart+numsLeft-1,inorder,inStart,inRoot-1,inMap);
    root->right=buildTreeInPost(postorder,postStart+numsLeft,postEnd-1,inorder,inRoot+1,inEnd,inMap);
    return root;
}

Node * buildTree(vector<int> postorder,vector<int> inorder)
{
    map<int,int> inMap;
    for(int i=0;i<inorder.size();i++)
    {
        inMap[inorder[i]]=i;
    }
    Node * root=buildTreeInPost(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,inMap);
    return root;
}

void printInorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main()
{
    dfile();
    int n;
    cin>>n;
    vector<int> inorder;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        inorder.push_back(data);
    }
    int m;
    cin>>m;
    vector<int> postorder;
    for(int i=0;i<m;i++)
    {
        int data;
        cin>>data;
        postorder.push_back(data);
    }
    Node * root=buildTree(postorder,inorder);
    printInorder(root);
    return 0;
}
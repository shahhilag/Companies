#include<bits/stdc++.h>
using namespace std;

//Input- + 3 -1 -1 * + 5 -1 -1 9 -1 -1 2 -1 -1

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

class Node
{
    public:
    string data;
    Node * right;
    Node * left;
    Node(string d)
    {
        data=d;
        left=right=NULL;
    }
};

Node * buildTree()
{
    string d;
    cin>>d;
    if(d=="-1")
    {
        return NULL;
    }
    Node * n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}

bool isOperation(string data)
{
    if(data=="+" or data=="-" or data=="/" or data=="*") return true;
    return false;
}

int evalTree(Node * root)
{
    if(root==NULL) return 0;
    if(!isOperation(root->data)) return stoi(root->data);
    
    if(root->data=="+") return evalTree(root->left)+evalTree(root->right);
    if(root->data=="-") return evalTree(root->left)-evalTree(root->right);
    if(root->data=="/") return evalTree(root->left)/evalTree(root->right);
    if(root->data=="*") return evalTree(root->left)*evalTree(root->right);
}

int main()
{
    dfile();
    Node * root=buildTree();
    cout<<evalTree(root)<<endl;
    return 0;
}
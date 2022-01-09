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

vector<int> getInorder(Node * root)
{
    vector<int> inorder;
    Node * cur=root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            inorder.push_back(cur->data);
            cur=cur->right;
        }
        else
        {
            Node * prev=cur->left;
            while(prev->right and prev->right!=cur)
            {
                prev=prev->right;
            }
            if(prev->right==NULL)
            {
                prev->right=cur;
                cur=cur->left;
            }
            else
            {
                prev->left=NULL;
                inorder.push_back(cur->data);
                cur=cur->right;
            }
        }
    }
    return inorder;
}
vector<int> getPreorder(Node * root)
{
    vector<int> preorder;
    Node * cur=root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            preorder.push_back(cur->data);
            cur=cur->right;
        }
        else
        {
            Node * prev=cur->left;
            while(prev->right and prev->right!=cur)
            {
                prev=prev->right;
            }
            if(prev->right==NULL)
            {
                prev->right=cur;
                preorder.push_back(cur->data);
                cur=cur->left;
            }
            else
            {
                prev->left=NULL;
                cur=cur->right;
            }
        }
    }
    return preorder;
}
vector<int> getPostorder(Node * root)
{
    vector<int> postorder;
    Node * cur=root;
    while(cur!=NULL)
    {
        if(cur->right==NULL)
        {
            postorder.push_back(cur->data);
            cur=cur->left;
        }
        else
        {
            Node * prev=cur->right;
            while(prev->left and prev->left!=cur)
            {
                prev=prev->left;
            }
            if(prev->left==NULL)
            {
                prev->left=cur;
                postorder.push_back(cur->data);
                cur=cur->right;
            }
            else
            {
                prev->right=NULL;
                cur=cur->left;
            }
        }
    }
    reverse(postorder.begin(),postorder.end());
    return postorder;
}

int main()
{
    dfile();
    // Node * root1=buildTree();
    // vector<int> ans1=getInorder(root1);
    // for(int x:ans1)
    // {
    //     cout<<x<<" ";
    // }   
    // cout<<endl;
    // Node * root2=buildTree();
    // vector<int> ans2=getPreorder(root2);
    // for(int x:ans2)
    // {
    //     cout<<x<<" "; 
    // }
    // cout<<endl;
    Node * root3=buildTree();
    vector<int> ans3=getPostorder(root3);
    for(int x:ans3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
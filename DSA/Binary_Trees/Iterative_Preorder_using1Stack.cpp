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
    vector<int> post;
    Node * curr=root;
    stack<Node *> s;
    while(curr!=NULL || !s.empty())
    {
        if(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        else
        {
            Node * temp=s.top()->right;
            if(temp==NULL)
            {
                temp=s.top();
                s.pop();
                post.push_back(temp->data);
                while(!s.empty() and temp==s.top()->right)
                {
                    temp=s.top();
                    s.pop();
                    post.push_back(temp->data);
                }
            }
            else
            {
                curr=temp;
            }
        }
    }
    return post;
}

int main()
{
    dfile();
    Node * root=buildTree();
    vector<int> ans=postOrderTraversal(root);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
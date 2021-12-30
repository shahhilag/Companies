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

Node * levelOrderBuild()
{
    int d;
    cin>>d;
    Node * root=new Node(d);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node * current =q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1)
        {
            current->left=new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1)
        {
            current->right=new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}


bool isLeaf(Node * root)
{
    if(!root->left and !root->right) return true;
    else return false;
}

void addLeftBoundary(Node * root,vector<int> &ans)
{
    Node * curr=root->left;
    while(curr)
    {
        if(!isLeaf(curr)) ans.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}

void addRightBoundary(Node * root,vector<int> &ans)
{
    Node * curr=root->right;
    vector<int> temp;
    while(curr)
    {
        if(!isLeaf(curr)) temp.push_back(curr->data); 
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        ans.push_back(temp[i]);
    }
}
void addLeafNode(Node * root,vector<int> &ans)
{
    if(isLeaf(root))
    {
        ans.push_back(root->data);
        return; 
    }
    if(root->left) addLeafNode(root->left,ans);
    if(root->right) addLeafNode(root->right,ans);  
}


vector<int> boundaryTraversal(Node * root)
{
    vector<int> ans;
    if(!root) return ans;//Root is empty
    if(!isLeaf(root)) ans.push_back(root->data);//Root is not leaf node
    addLeftBoundary(root,ans);
    addLeafNode(root,ans);
    addRightBoundary(root,ans);
    return ans;
}

int main()
{
    dfile();
    Node * root=levelOrderBuild();
    vector<int> ans=boundaryTraversal(root);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
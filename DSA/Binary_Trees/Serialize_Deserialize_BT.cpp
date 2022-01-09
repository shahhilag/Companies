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

string serialize(Node * root)
{
    if(!root) return "#";
    string s="";
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node * curNode=q.front();
        q.pop();
        if(curNode==NULL) s.append("#,");
        else s.append(to_string(curNode->data)+',');
        if(curNode!=NULL)
        {
            q.push(curNode->left);
            q.push(curNode->right);
        }
    }
    return s;
}

Node * deserialize(string data)
{
    if(data.size()==0) return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');//getline(stream,string object,delimiter)
    Node * root=new Node(stoi(str));
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node * node=q.front();
        q.pop();
        getline(s,str,',');
        if(str=="#") node->left=NULL;
        else
        {
            Node * leftNode=new Node(stoi(str));
            node->left=leftNode;
            q.push(leftNode);
        }
        getline(s,str,',');
        if(str=="#") node->right=NULL;
        else
        {
            Node * rightNode=new Node(stoi(str));
            node->right=rightNode;
            q.push(rightNode);
        }
    }
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
    Node * root=buildTree();
    string ans=serialize(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }  
    cout<<endl;
    Node * newRoot=deserialize(ans);
    printInorder(newRoot);
    return 0;
}
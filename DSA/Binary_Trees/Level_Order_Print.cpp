#include<bits/stdc++.h>
using namespace std;

//Input-1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

class Node
{
    public:
    int data;
    Node * left;
    Node * right;
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

void levelOrderTraversal(Node * root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node * temp=q.front();
        if(temp==NULL)
        {
            cout<<endl;
            q.pop();
            //Insert new node for next level
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}

int main()
{
     dfile();
     Node * root=levelOrderBuild();
     levelOrderTraversal(root);
     return 0;
}
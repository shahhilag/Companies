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
    Node * left;
    Node * right;
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
    Node * n= new Node(d);
    n->left=buildTree();
    n->right=buildTree();
}

void levelOrderTraversal(Node * root)
{
    queue<Node *> q;//Data of type integer but storing address because we also need to insert the children.
    //Node * more efficient as Node will take extra memory
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
            //If else if difference
// if(i == 0) ... //if i = 0 this will work and skip the following else-if statements
// else if(i == 1) ...//if i not equal to 0 and if i = 1 this will work and skip the following else-if statement
// else if(i == 2) ...// if i not equal to 0 or 1 and if i = 2 the statement will execute


// if(i == 0) ...//if i = 0 this will work and check the following conditions also
// if(i == 1) ...//regardless of the i == 0 check, this if condition is checked
// if(i == 2) ...//regardless of the i == 0 and i == 1 check, this if condition is checked

        }
    }
    return;
}

int main()
{
     dfile();
     Node * root=buildTree();
     levelOrderTraversal(root);
     return 0;
}
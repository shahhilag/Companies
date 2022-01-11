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

Node * findMin(Node * root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

Node * remove(Node * root,int key)
{
    if(root==NULL) return NULL;
    else if(key<root->data)
    {
        //If key is present in left we update the root->left to perform deletion on the left subtree. 
        root->left=remove(root->left,key);
    }
    else if(key>root->data)
    {
        //If key is present in right we update the root->right to perform deletion on the right subtree. 
        root->right=remove(root->right,key);
    }
    else
    {
        //When the current node matches the key
        //1-No Children
        if(root->left==NULL and root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        //2-Single Children
        else if(root->left==NULL)
        {
            Node * temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            Node * temp=root;
            root=root->left;
            delete temp;
        }
        //3-Two Children
        else
        {
            Node * temp=findMin(root->right);
            root->data=temp->data;
            //Right of the updated node will point to a new subtree returned by the remove() function
            root->right=remove(root->right,temp->data);
        }
    }
    return root;
}

Node * insert(Node * root,int key)
{
    if(root==NULL)
    {
        return new Node(key);
    }
    if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}

void printInorder(Node * root)
{
    if(root==NULL) return;
    printInorder(root->left);
    cout<<root->data<<",";
    printInorder(root->right);
}

int main()
{
    dfile();
    Node * root=NULL;
    int arr[]={8,3,10,11,1,6,14,4,7,13};
    for(int x:arr)
    {        
        root=insert(root,x);
    }
    printInorder(root);
    cout<<endl;
    int key;
    cin>>key;
    root=remove(root,key);
    printInorder(root);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//Input-
//3
//1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

struct Node {
    int key;
    Node* left, *right;
    Node(int d)
    {
        key=d;
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

vector<int> printKthLevel(Node* root, int k){
    queue<Node *> q;
    vector<int> ans;
    q.push(root);
    q.push(NULL);
    int counter=0;
    while(counter<=k)
    {
        Node* temp=q.front();
        if(temp==NULL)
        {
            counter++;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            if(counter==k)
            {
                ans.push_back(temp->key);
            }
            else
            {
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
    }
   return ans;
}
int main()
{
     dfile();
     int k;
     cin>>k;
     Node * root=levelOrderBuild();
     vector<int> ans=printKthLevel(root,k);
     for(int x:ans)
     {
         cout<<x<<" ";
     }
     return 0;
}
#include<bits/stdc++.h>
using namespace std;

//Input: 5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 5 -1 -1 1 -1 -1

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

vector<vector<int>> ans;
void help(Node* root, int targetSum, vector<int> &subans, int sum)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        
        if(targetSum == sum+root->data) 
        {
            subans.push_back(root->data);
            ans.push_back(subans);
            subans.pop_back();
        }
        return;
    }
    if(root->left)
    {
        subans.push_back(root->data);
        help(root->left, targetSum, subans, sum+root->data);
        subans.pop_back();
    }
    if(root->right)
    {
        subans.push_back(root->data);
        help(root->right, targetSum, subans, sum+root->data);
        subans.pop_back();
    }
} 
vector<vector<int>> pathSum(Node* root, int targetSum) {
    ans.clear();
    vector<int> subans;
    help(root, targetSum, subans, 0);
    return ans;
}

int main()
{
    dfile();
    Node * root=buildTree();
    int targetSum;
    cin>>targetSum;
    vector<vector<int>> ans=pathSum(root,targetSum);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
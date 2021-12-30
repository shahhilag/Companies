#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};



int fun(Node *root, int &maxi)
{
    if (root==NULL) return 0;
    int left = max(0, fun(root->left, maxi));
    int right = max(0, fun(root->right, maxi));

    maxi = max(maxi,left+right+root->data);
    return max(left,right)+root->data;
}

int maxPathSum(Node *root)
{
    int maxi = INT_MIN;
    fun(root, maxi);
    return maxi;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(7);

    cout << "The maximum path sum of tree is: " << maxPathSum(root) << endl;



    return 0;
}
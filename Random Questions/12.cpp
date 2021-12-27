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

vector<int> prepostin(Node *root)
{
    stack<pair<Node *, int>> st;
    st.push({root, 1});
    vector<int> pre, in, post;

   if(root==NULL)  return {0};

    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        if (it.second == 1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left != NULL)
            {
                st.push({it.first->left, 1});
            }
        }

        else if (it.second == 2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if (it.first->right != NULL)
            {
                st.push({it.first->right, 1});
            }
        }
        else
        {
            post.push_back(it.first->data);
        }
    }
    //return pre;
     return post;
    // return in;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(7);

    vector<int> ans = prepostin(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }


    return 0;
}
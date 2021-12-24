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
    Node * n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}

//Diameter Optimised
class HDPair
{
    public:
        int height;
        int diameter;
};

HDPair optDiameter(Node * root)
{
    HDPair p;
    if(root==NULL)
    {
        p.diameter=p.height=0;
        return p;
    }
    HDPair Left=optDiameter(root->left);
    HDPair Right=optDiameter(root->right);
    p.height=max(Left.height,Right.height)+1;
    
    int D1=Left.height+Right.height;
    int D2=Left.diameter;
    int D3=Right.diameter;

    p.diameter=max(D1,max(D2,D3));
    return p;
}

int main()
{
     dfile();
     Node * root=buildTree();
     cout<<"Optimised diameter:"<<optDiameter(root).diameter<<endl;
     return 0;
}
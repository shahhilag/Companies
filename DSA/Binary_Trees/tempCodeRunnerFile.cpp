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
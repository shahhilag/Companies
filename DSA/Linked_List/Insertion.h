
class Node
{
    //Contents of Node
    int data;
    public:
        Node* next;
        Node(int d):data(d),next(0){}
        // friend class List;
        int getData()
        {
            return data;
        }
};
class List
{
    //Linked list contents
    Node *head;
    Node *tail;
    public:
        List():head(0),tail(0){}//Initialization List
        Node* begin()
        {
            return head;
        }
        void push_front(int data)
        {
            if(head==0)//Only one element present
            {
                Node * n=new Node(data);
                head=tail=n;
            }
            else//More than one element
            {
                Node * n=new Node(data);
                n->next=head;
                head=n;
            }
        }
        void push_back(int data)
        {
            if(head==0)
            {
                Node * n=new Node(data);
                head=tail=n;
            }
            else
            {
                Node *n=new Node(data);
                tail->next=n;
                tail=n;
            }
        }
        void insert(int data,int pos)
        {
            if(pos==0)
            {
                push_front(data);
                return;
            }
            else
            {
                Node *temp=head;
                for(int i=1;i<=pos-1;i++)
                {
                    temp=temp->next;
                }
                Node * n=new Node(data);//Dynamic allocation as we want node to persist in memory even after the function gets executed.
                n->next=temp->next;
                temp->next=n;
            }
        }
};
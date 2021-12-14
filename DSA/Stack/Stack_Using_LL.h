//Forwared Declaration
template<typename T>
class Stack;

template<typename T>
class Node
{
    public:
        T data;
        Node <T> *next;
    Node(T d)
    {
        data=d;
    }
};
template<typename T>
class Stack
{
    Node<T> *head;
    public:
        Stack()
        {
            head=NULL;
        }
        void push(T data)
        {
            Node<T> * n=new Node<T>(data);
            n->next=head;   //Linking n node with head node
            head=n;
        }
        T top()
        {
            return head->data;
        }
        bool empty()
        {
            return head==NULL;
        }
        void pop()
        {
            Node<T> * temp=head;
            head=head->next;
            delete temp;
        }
};
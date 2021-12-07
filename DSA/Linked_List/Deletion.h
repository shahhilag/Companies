#include<iostream>
using namespace std;

class List;
class Node
{
    int data;
    public:
    Node * next;
        // ~Node()
        // {
        //     if(next!=0)
        //     {
        //         delete next;
        //     }
        //     cout<<"Deleted"<<data<<"node"<<endl;
        // }
        Node(int d):data(d),next(0){}
        int getData()
        {
            return data;
        }
        friend class List;
};
class List
{
    Node * head;
    Node * tail;
    public:
        List():head(0),tail(0){}
        Node * begin()
        {
            return head;
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
        // ~List()
        // {
        //     if(head!=0)
        //     {
              
        //         delete head;
        //         head=0;
        //     }
        // }  
        void pop_front()
        {
            Node * temp=head;
            head=head->next;
            temp->next=0;
            delete temp;
        }    
        void pop_back()
        {
            int counter=0;
            Node *current=head;
            while(current!=0)
            {
                counter++;
                current=current->next;
            }
            Node *temp=head;
            for(int i=0;i<counter-2;i++)//Skip the NULL pointer and the last element
            {
                temp=temp->next;
                cout<<"Counting"<<counter<<endl;
            }
            tail=temp;
            temp=temp->next;
            tail->next=0;
            delete temp;           
        }
        void remove(int pos)
        {
            Node* temp=head;
            for(int i=0;i<pos-1;i++)
            {
                // cout<<i<<endl;
                temp=temp->next;
            }
            Node * n=temp->next;
            temp->next=n->next;
            n->next=0;
            delete n;
        }
};
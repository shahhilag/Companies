using namespace std;

class Node
{
    int data;
    public:
        Node* next;
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
    int searchHelper(Node *start, int key){
		//base case
		if(start==0){
			return -1;
		}
		// value matches
		if(start->data==key){
			return 0;
		}
		//remaining part of the linked list
		int subIdx = searchHelper(start->next,key);
		if(subIdx==-1){
			return -1;
		}
		return subIdx + 1;

	}
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
        int search(int key){

            Node * temp = head;
            int idx = 0;

            while(temp!=0){
                if(temp->data == key){
                    return idx;
                }
                idx++;
                temp = temp->next;
            }	
            return -1;
        }
        int recursiveSearch(int key){
		int idx = searchHelper(head,key);
		return idx;
	}


        //Recursive search with value
        // int searchRecindex(Node* head,int key)
        // {
        //     //Base Case
        //     if(head==0)
        //     {
        //         return -1;
        //     }
        //     //Rec Case
        //     if(head->data==key)
        //     {
        //         return 0;
        //     }
        //     int subindex=searchRecindex(head->next,key);
        //     if(subindex==-1)
        //     {
        //         return -1;
        //     }
        //     return subindex+1;
        // }
};
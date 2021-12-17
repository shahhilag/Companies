class Queue
{
    int * arr;
    int cs;
    int ms;
    int front;
    int rear;
    public:
        Queue(int default_size=5)
        {
            ms=default_size;
            arr=new int[ms];
            cs=0;
            rear=ms-1;
        }
        bool full()
        {
            return cs==ms;
        }
        void push(int data)
        {
            if(!full())
            {
                rear=(rear+1)%ms;
                arr[rear]=data;
                cs++;
            }
        }
        bool empty()
        {
            return cs==0;
        }
        void pop()
        {
            if(!empty())
            {
                front=(front+1)%ms;
                cs--;
            }
        }
        int getFront()
        {
            return arr[front];
        }
};
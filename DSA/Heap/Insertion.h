#include<bits/stdc++.h>
using namespace std;

class Heap
{
    vector<int> v;
    public:
    Heap(int default_size=10)
    {
        v.reserve(default_size+1);
        v.push_back(-1);
    }
    void push(int data)
    {
        v.push_back(data);
        int idx=v.size()-1;//Index of Insertion
        int parent=idx/2;//Parent of index
        while(idx>1 and v[idx]<v[parent])
        {
            swap(v[idx],v[parent]);
            idx=parent;//Index is shifted to parent
            parent=parent/2;//Parent becomes half of the original
        }
    }
    int top()
    {
        return v[1];
    }

    void heapify(int i)
    {
        int left=2*i;
        int right=2*i+1;
        int minIdx=i;
        if(left<v.size() and v[left]<v[i])
        {
            minIdx=left;
        }
        if(right<v.size() and v[right]<v[minIdx])
        {
            minIdx=right;
        }
        if(minIdx!=i)
        {
            swap(v[i],v[minIdx]);
            heapify(minIdx);
        }
    }

    bool isEmpty()
    {
        return v.size()==1;
    }

    void pop()
    {
        int idx=v.size()-1;
        swap(v[1],v[idx]);
        v.pop_back();
        heapify(1);
    }
};

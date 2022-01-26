#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

class Compare
{
    public:
    bool operator()(int a,int b)
    {
        return a>b;
    }
};

int main()
{
    dfile();
    int arr[]={10,15,20,13,6,90};
    int n=sizeof(arr)/sizeof(int);
    // priority_queue<int> heap;
    priority_queue<int,vector<int>,Compare> heap;
    for(int x:arr)
    {
        heap.push(x);
    }
    while(!heap.empty())
    {
        cout<<heap.top()<<endl;
        heap.pop();
    }
    return 0;
}
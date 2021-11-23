#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[]={10,15,12,9,6,4,3,10,8};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int index=linear_search(a,n,key);
    if(index!=-1)
    {
        cout<<key<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<" is not present "<<endl;
    }
    return 0;
}
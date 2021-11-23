#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=0;
    for(int i=0;i<n;i++)
    {   
        mid=(s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(key>a[mid])
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[]={10,20,30,40,45,60,70,89};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int index=binarySearch(a,n,key);
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
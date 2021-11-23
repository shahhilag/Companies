#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int lastOcc(int a[],int n,int key)
{
    //Base Case
    if(n==0)
    {
        return -1;
    }
    //Rec Case
    int subIndex=lastOcc(a+1,n-1,key);
    if(subIndex==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subIndex+1;
    }
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int key;
     cin>>key;
     cout<<lastOcc(a,n,key);
     return 0;
}
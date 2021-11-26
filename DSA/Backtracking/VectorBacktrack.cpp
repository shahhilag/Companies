#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void printVector(vector<int> arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void fillArray(vector<int> &arr,int i,int n,int val)
{
    //base case
    if(i==n)
    {
        printVector(arr,n);
        cout<<endl;
        return;
    }
    //rec case
    arr[i]=val;
    fillArray(arr,i+1,n,val+1);
    //backtracking
    arr[i]=(-1*arr[i]);
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> arr(100,0);
     fillArray(arr,0,n,1);
     printVector(arr,n);
     return 0;
}
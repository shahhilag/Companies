#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void merge(vector<int> &array,int s,int e)
{
    int i=s; 
    int mid=(s+e)/2;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid and j<=e)
    {
         if(array[i]<array[j])
         {
              temp.push_back(array[i]);
              i++;
         }
         else
         {
              temp.push_back(array[j]);
              j++;
         }
    }
    while(i<=mid)
    {
         temp.push_back(array[i]);
         i++;
    }
    while(j<=e)
    {
         temp.push_back(array[j]);
         j++;
    }
    int k=0;
    for(int idx=s;idx<=e;idx++)
    {
         array[idx]=temp[k++];
    }
    return;
}

void mergeSort(vector<int>&array,int s,int e)
{
     if(s>=e)
     {
          return;
     }
     int mid=(s+e)/2;
     mergeSort(array,s,mid);
     mergeSort(array,mid+1,e);
     return merge(array,s,e);
}

int main()
{
     dfile();
     vector<int> arr{10,5,2,0,7,6,9};
     int s=0;
     int e=arr.size()-1;
     mergeSort(arr,s,e);
     for(int x:arr)
     {
          cout<<x<<",";
     }    
     return 0;
}
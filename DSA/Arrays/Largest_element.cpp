#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int largestElement(vector<int> arr)
{
     int max_element=INT_MIN;
     for(int i=0;i<arr.size();i++)
     {
         if(arr[i]>max_element)
         {
             max_element=arr[i];
         }
     }
     return max_element;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     vector<int> arr;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         arr.push_back(a[i]);
     }
     cout<<largestElement(arr)<<endl;
     return 0;
}
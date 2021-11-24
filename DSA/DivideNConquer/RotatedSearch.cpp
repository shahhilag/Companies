#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int rotatedSearch(vector<int> a,int key)
{
    int s=0;
    int e=(a.size()-1);
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else
        {
            //left
            if(a[s]<=a[mid])
            {   
                if(key>=a[s] and key<=a[e])
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            //right
            else
            {
                if(key<=a[e] and key>=a[mid])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }
    }
    return -1;
}

int main()
{
     dfile();
     vector<int> a{4,5,6,7,0,1,2,3};
     int key;
     cin>>key;
     cout<<rotatedSearch(a,key);
     return 0;
}
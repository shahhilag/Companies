#include<bits/stdc++.h>
using namespace std;


int minValueToBalance(int a[],int n)
{
    //Two Pointer Approach
    //a1,b1 are the pointers
    int a1=0;
    int b1=(n/2);
    int sum1=0;
    int sum2=0;
    int sum=0;
    //Left side sum
    for(int i=a1;i<=(b1-1);i++)
    {   
        sum1+=a[i];
    }   
    //Right Side Sum
    for(int i=b1;i<n;i++)
    {   
        sum2+=a[i];
    }   
    sum=abs(sum2-sum1);
    return sum;
    //O(N/2)+O(N/2)=O(N)

}

int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     cout<<minValueToBalance(a,n);
     return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void stockSpan(int prices[],int n,int span[])
{
    //Stack for storing the indices of days
    stack<int> s;
    
    //0th day pushed in stack
    s.push(0);
    
    //Span on 0th day will be 1
    span[0]=1;
    
    //Loop for rest of the days
    for(int i=1;i<n;i++)
    {
        int current_price=prices[i];
        while(!s.empty() and prices[s.top()]<=current_price)
        {
            s.pop();
        }
         if(!s.empty())
        {
            int prev_highest=s.top();
            span[i]=i-prev_highest;
        }
        else
        {
            span[i]=i+1;
        }
        //Push the element into the stack
        s.push(i);
    }
}

int main()
{
     dfile();
     int prices[]={100,80,60,70,60,75,85};
     int n=sizeof(prices)/sizeof(int);
     int span[100000]={0};
     stockSpan(prices,n,span);
     for(int i=0;i<n;i++)
     {
         cout<<span[i]<<" ";
     }    
     return 0;
}
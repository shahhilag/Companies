#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> stockSpanner(vector<int> &stocks)
{
    int n=stocks.size();
    int counter=0;
    vector<int> vcounter;
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(stocks[i]>=stocks[j])
            {
                s.push(stocks[j]);
            }
            else if(stocks[i]<stocks[j])
            {
                break;
            }
        }
        while(!s.empty())
        {
            counter++;
            s.pop();
        }
        vcounter.push_back(counter);
        counter=0;
    }    
    return vcounter;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> stocks;
     for(int i=0;i<n;i++)
     {
         int data;
         cin>>data;
         stocks.push_back(data);
     }    
     vector<int> ans=stockSpanner(stocks);
     for(int x:ans)
     {
         cout<<x<<" ";
     }
     return 0;
}

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 
int threeTime(vector<int> v)
{
   int n=(8*sizeof(unsigned int));
   int counter[n]={0};
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<v.size();j++)
       {
           if((v[j]&(1<<i))!=0)
           {
               counter[i]+=1;
           }
       }
   }
   int res=0;
   for(int i=0;i<n;i++)
   {
       res+=(counter[i]%3)*(1<<i);
   } 
   return res;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> v;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         v.push_back(x);
     }
     cout<<threeTime(v);
     return 0;
}
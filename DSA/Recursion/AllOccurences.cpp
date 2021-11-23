#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

vector<int> vec;

void helper(int k, vector<int> v, int i){
    if(i==v.size()){
        return ;
    }
    if(v[i]==k){
        vec.push_back(i);
    }
    helper(k,v,i+1);
    return ;
}

vector<int> findAllOccurences(int k, vector<int> v)
{ 
       vec.clear(); 
       helper(k,v,0);
       return vec;
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
     int k;
     cin>>k;
     vector<int> a=findAllOccurences(k,v);
     for(int i=0;i<a.size();i++)
     {
         cout<<a[i]<<" ";
     }
     return 0;
}
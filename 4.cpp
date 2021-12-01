#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void maxOcc(vector<vector<int>> v,int m,int n)
{
    vector<int> temp(m*n,0);
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            int curr=v[i][j];
            temp[curr]++;
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        if(temp.at(i)>maxi)
        {
            maxi=temp[i];
        }
    }
    if(maxi==1)
    {
        cout<<"Unique"<<endl;
    }
    else if(maxi>1)
    {
         for(int i=0;i<temp.size();i++)
        {
             if(temp.at(i)==maxi)
            {
                cout<<i<<" "<<maxi<<endl; 
            }
        }
    }
   
}

int main()
{
     dfile();
     int m,n;
     cin>>m>>n;
     vector<vector<int>> v;
     for(int i=0;i<m;i++)
     {
         vector<int> temp;
         for(int j=0;j<n;j++)
         {
             int x;
             cin>>x;
             temp.push_back(x);
         }
         v.push_back(temp);
     }  
     maxOcc(v,m,n);
     return 0;
}

//Time Complexity--------->O(M*N)+O(M*N)+O(M*N) = 3*O(M*N)
//Space Complexity-------->O(M*N)

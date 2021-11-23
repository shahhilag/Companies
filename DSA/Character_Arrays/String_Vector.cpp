#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     int n=5;
     vector<string> sarr;
     string temp;
     while(n--)
     {
         getline(cin,temp);
         sarr.push_back(temp);
     }
     for(int i=0;i<sarr.size();i++)
     {
         cout<<sarr[i]<<", ";
     }
     return 0;
}
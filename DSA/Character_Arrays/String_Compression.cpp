#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int compress(vector<char>& chars) {
   int counter=1;
   string ans;
   for(int i=0;i<chars.size();i++)
   {
       while(i<chars.size()-1 and chars[i+1]==chars[i])
       {
           counter++;
           i++;
       }
       ans+=chars[i];
       if(counter==1)
       {
           continue;
       } 
       ans+=to_string(counter);
       counter=1;
   }
   chars.clear();
    for(int i=0;i<ans.size();i++)
    {
        chars.push_back(ans[i]);
    }
    return chars.size();
}

int main()
{
     dfile();
     int n;
     cin>>n;
     char s;
     vector<char> sarr;
     for(int i=0;i<n;i++)
     {
         cin>>s;
         sarr.push_back(s);
     }
     cout<<compress(sarr);
     return 0;
}
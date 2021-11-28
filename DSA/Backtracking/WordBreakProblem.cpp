#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

set<string> counter;
int cnt=0;
void helper(string str,string res,vector<string> &dictionary)
{
    //Base Case
    if(str.size()==0)
    {
        // cout<<res<<endl;
        counter.insert(res);
        cnt=counter.size();
        return;
    }
    //Rec Case
    for(int i=0;i<str.size();i++)
    {
        string left=str.substr(0,i+1);
        if(find(dictionary.begin(),dictionary.end(),left)!=dictionary.end())
        {
            string right=str.substr(i+1);
            helper(right,res+left+" ",dictionary);
        }
    }
}

int wordBreak(string str, vector<string> &dictionary){
    helper(str," ",dictionary);
    return cnt;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<string> dictionary(n);
     for(int i=0;i<n;i++)
     {
         cin>>dictionary[i];
     }
     string str;
     cin>>str;
     cout<<wordBreak(str,dictionary);
     return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

//Given a string with all unique characters,print possible permutation of strings
void permutation(string str,string perm)
{
    if(str.size()==0)
    {
        cout<<perm<<endl;
        return;
    }
    unordered_set<char> s;
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];//current character
        if(s.count(ch)==0)
        {
            string ros=str.substr(0,i)+str.substr(i+1);
            s.insert(ch);
            permutation(ros,perm+ch);
        }
    }
}

int main()
{
     dfile();
     permutation("AAC","");
     return 0;
}
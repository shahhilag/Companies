#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

string vowel(string S){
    string v;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]=='a' or S[i]=='e' or S[i]=='i' or S[i]=='o' or S[i]=='u')
        {
            v+=S[i];
        }
        else
        {
            continue;
        }
    }
    return v;
} 

int main()
{
     dfile();
     string s;
     cin>>s;
     cout<<vowel(s);
     return 0;
}
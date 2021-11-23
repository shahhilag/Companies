#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int binaryToDecimal(string s)
{
    int power=0;
    int newnumber=stoi(s);
    int ans=0;
    int digit=0;
    while(newnumber>0)
    {
        digit=newnumber%10;
        ans+=(digit*(pow(2,power)));
        power++;
        newnumber=newnumber/10;
    }
    return ans;
}

int main()
{
     dfile();
     string s;
     cin>>s;
     cout<<binaryToDecimal(s);
     return 0;
}
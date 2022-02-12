#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n%2==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<int> v(26,0);
    for(int i=0;i<n;i++)
    {
        v[s[i]-'a']++;
    }
    for(auto x:v)
    {
        if(x>(n/2)) 
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    int j=n/2;
    int i=0;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s<<endl;
}

int main()
{
    dfile();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
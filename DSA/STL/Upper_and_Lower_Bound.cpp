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
     int n;
     cin>>n;
    //  int a[n];
    //  for(int i=0;i<n;i++)
    //  {
    //      cin>>a[i];
    //  }
    //  sort(a,a+n);
    //  for(int i=0;i<n;i++)
    //  {
    //      cout<<a[i]<<" ";
    //  }
    //  cout<<endl;
    //  int *ptr=lower_bound(a,a+n,4);
    //  if(ptr==a+n)
    //  {
    //      cout<<"Not Found";
    //  }
    //  cout<<(*ptr)<<endl;
    
    // vector<int> a(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a.begin(),a.end());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // auto it=upper_bound(a.begin(),a.end(),5);
    // if(it==a.end())
    // {
    //     cout<<"Not Found";
    // }
    // else
    // {
    //     cout<<(*it)<<endl;
    // }

    set<int> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it=s.lower_bound(5);
    cout<<(*it)<<endl;
    return 0;
}
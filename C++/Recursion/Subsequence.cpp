//Time Complexity---->O(2^N*N)
//Space Complexity--->O(N)

#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void subsequence(int idx,int a[],vector<int> &b,int n)
{
    if(idx==n)
    {
        for(int i=0;i<b.size();i++) cout<<b.at(i)<<" ";
        if(b.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    b.push_back(a[idx]);//element included
    subsequence(idx+1,a,b,n);
    b.pop_back();//element not included
    subsequence(idx+1,a,b,n);

    //Reverse tree print
    // subsequence(idx+1,a,b,n);
    // b.push_back(a[idx]);//element included
    // subsequence(idx+1,a,b,n);
    // b.pop_back();//element not included
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }
    vector<int> b;
    subsequence(0,a,b,n);
    return 0;
}
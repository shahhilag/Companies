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
     int t;
     cin>>t;
     while(t--)
     {
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++)  
        {
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies=0;
        for(int i=0;i<k;i++)
        {
            auto last_it=bags.end();
            last_it--;
            long long candy_ctr=(*last_it);
            total_candies+=candy_ctr;
            bags.erase(last_it);
            bags.insert(candy_ctr/2);
        }
        cout<<total_candies<<endl;
     }
     return 0;
}
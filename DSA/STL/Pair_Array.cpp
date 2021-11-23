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
     pair<int,int> p_array[3];
     p_array[0]={1,2};
     p_array[1]={2,3};
     p_array[2]={3,4};
     swap(p_array[0],p_array[2]);
     for(int i=0;i<3;i++)
     {
         cout<<p_array[i].first<<" "<<p_array[i].second;
     }
     return 0;
}
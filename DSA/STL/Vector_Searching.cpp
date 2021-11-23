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
     vector<int> arr={10,11,2,3,6,7,8};
     int key=11;
     vector<int>::iterator it=find(arr.begin(),arr.end(),key);
     if(it<arr.end())
     {
         cout<<it-arr.begin()<<endl;
     }else{
         cout<<"Element not found"<<endl;
     }
     return 0;
}
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
     map<int,multiset<string>> marks_map;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int marks;
         string name;
         cin>>name>>marks;
         marks_map[marks].insert(name);
     }
     auto cur_it=marks_map.end();
     cur_it--;
     while(true)
     {
         auto &students=(*cur_it).second;
         int marks=(*cur_it).first;
         for(auto student:students)
         {
             cout<<student<<" "<<marks<<endl;
         }
         if(cur_it==marks_map.begin())
         {
             break;
         }
         else
         {
             cur_it--;
         }
     }
     return 0;
}
#include<bits/stdc++.h>
#include "Search.h"
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     List l;
     l.push_back(0);
     l.push_back(1);
     l.push_back(2);
     l.push_back(3);
     l.push_back(4);
     cout<<l.search(1)<<endl;
     cout<<l.recursiveSearch(3)<<endl;
    //  cout<<ans<<endl;
    //  int ans=l.searchRecindex(0,2);
    //  while(head!=0)
    //  {
    //      cout<<head->getData()<<"->";
    //      head=head->next;
    //  }
    //  cout<<endl;
     return 0;
}
#include<bits/stdc++.h>
#include "Deletion.h"
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
     l.push_back(1);
     l.push_back(0);
     l.push_back(3);
     l.push_back(4);
     l.pop_back();
     l.remove(2);
     Node * head=l.begin();
     while(head!=0)
     {
         cout<<head->getData()<<"->";
         head=head->next;
     }
     return 0;
}
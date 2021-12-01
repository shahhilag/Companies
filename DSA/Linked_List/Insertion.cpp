#include<bits/stdc++.h>
#include "Insertion.h"
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
     l.push_front(1);
     l.push_front(2);
     l.push_front(3);
     l.push_back(4);
     l.push_back(5);
     l.insert(0,3);
     Node *head=l.begin();
     while(head!=0)
     {
          cout<<head->getData()<<"->";
          head=head->next;
     }
     return 0;
}
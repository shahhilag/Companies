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
    Heap h;
    h.push(5);
    h.push(2);
    h.push(3);
    h.push(15);
    h.push(30);
    h.push(1);
    while(!h.isEmpty())
    {
        cout<<h.top()<<" ";
        h.pop();
    }
    return 0;
}
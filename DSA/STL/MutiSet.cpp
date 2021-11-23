#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void print(multiset<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
     dfile();
     multiset<string> s;
     s.insert("abc");
     s.insert("zsdf");
     s.insert("bcd");
     s.insert("abc");
     print(s);
     return 0;
}
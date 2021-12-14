#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

stack<int> s;

void push_digits(int n)
{
    while(n!=0)
    {
        s.push(n%10);
        n=n/10;
    }
}

int reverse(int n)
{
    push_digits(n);
    int reverse=0;
    int i=1;
    while(!s.empty())
    {
        reverse=reverse + (s.top()*i);
        s.pop();
        i=i*10;
    }
    return reverse;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int ans=reverse(n);
     cout<<ans<<endl;
     return 0;
}
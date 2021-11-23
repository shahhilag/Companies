#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

string spell[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpell(int n)
{
    //Base Case
    if(n==0)
    {
        return ;
    }
    int last_digit=n%10;
    printSpell(n/10);
    cout<<spell[last_digit]<<" ";
}

int main()
{
     dfile();
     int n;
     cin>>n;
     printSpell(n);
     return 0;
}
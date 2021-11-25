#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 
//There are N cells arranged in linear fashion.You are standing at 0th cell and eant to reach (n-1)th cell.At each cell you can jump at most 6 steps.
//How many ways can you reach N-1.Print number and also the ways.
int totalPath=0;
void dicepath(int n,int i,string osf)
{
    //Base Case
    if(i>=n) return;
    if(i==n-1)
    {
        totalPath++;
        cout<<osf<<endl;
        return;
    }
    //Rec Case
    for(int j=1;j<=6;j++)
    {
        dicepath(n,i+j,osf+to_string(j)+"->");//There are 6 options of path so if I get path from s+i-->end I would just append the numbers from 1 to 6 to s+i.
    }
}

int main()
{
     dfile();
     dicepath(7,0,"");
     cout<<"Total Path are:"<<totalPath<<endl;
     return 0;
}
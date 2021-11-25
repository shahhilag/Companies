#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

//You will be given a value n.Print the first (n+1) whole numbers in lexicographical order.
//0--->1---->10---->100---->1000---->101----->102----->103......
//After 1----> 2 does not come in lexicographical order.
void lexico(int n,int i)
{
    if(i>n) return;
    cout<<i<<endl;
    for(int j=(i==0)?1:0;j<=9;j++)//if i==0 j=1---->9//first node has 9 elements//else other nodes have 10 elements
    {
         lexico(n,(10*i)+j);//At child node if we observe each time the starting value becomes (10*i)+j
    }
}

int main()
{
     dfile();
     lexico(13,0);
     return 0;
}
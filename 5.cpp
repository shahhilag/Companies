#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool helper(int n,int counter)
{
    //Base Case
    if(counter>n)
    {
        return true;
    }
    //Self Work
    if(n%counter==0)
    {
        return false;
    }
    //Recursive Case
    return helper(n-n/counter,counter+1);
}

bool isLucky(int n)
{
    return helper(n,2);   
}


int main()
{
     dfile();
     int n;
     cin>>n;
     if(isLucky(n))
     {
         cout<<"1"<<endl;
     }
     else
     {
         cout<<"0"<<endl;
     }
     return 0;
}
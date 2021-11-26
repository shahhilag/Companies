#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void permute(string str,int s,int e)
{
    //Base Case
    if(s==e)
    {
        cout<<str<<endl;
        return;
    }
    else
    {
        for(int i=s;i<=e;i++)
        {
            //Swapping done
            swap(str[s],str[i]);
            //Recursion
            permute(str,s+1,e);
            //Backtrack
            swap(str[s],str[i]);
        }
    }
}

int main()
{
     dfile();
     string str="ABC";
     int n=str.size();
     permute(str,0,n-1);
     return 0;
}
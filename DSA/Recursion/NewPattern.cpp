#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void np(int n,int i,int k)
{
    //Base Case 
    if(n==0) return;
    //Self Work
    if(i<k)
    {
        cout<<"* ";
        np(n,i+1,k);
    }
    else
    {
        cout<<endl;
        //Rec Case
        np(n-1,0,k+1);
    }
    
}

int main()
{
     dfile();
     int n;
     cin>>n;
     np(n,0,1);
     return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

// void pattern(int n)
// {
//     //Base Case
//     if(n==0) return;
//     //Self Work
//     for(int i=0;i<n;i++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//     //Rec Case
//     pattern(n-1);
// }
void pattern(int n,int i)
{
    //Base Case
    if(n==0) return;
    //Self Work
    //print column
    if(i<n)
    {
        cout<<"* ";
        pattern(n,i+1);
    }
    //print row
    else
    {
        cout<<endl;
        pattern(n-1,0);
    }
}


int main()
{
     dfile();
     int n;
     cin>>n;
     pattern(n,0);
     return 0;
}
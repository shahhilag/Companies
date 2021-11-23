#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 
//Only 2 strings will be output
int main()
{
     dfile();
     int n;
     cin>>n;
     char sentence[1000];
     while(n--)
     {
         cin.getline(sentence,1000);
         cout<<sentence<<endl;
     }
     return 0;
}
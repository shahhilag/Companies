#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int main()
{
     dfile();
     int n;
     cin>>n;
     cin.get();
     char sentence[1000];
     char largest[1000];
     int largest_len=0;
     while(n--)
     {
         cin.getline(sentence,1000);
         int len=strlen(sentence);
         if(len>largest_len)
         {
             largest_len=len;
             strcpy(largest,sentence);
         }
     }
     cout<<"Largest sentence is:"<<largest<<endl;
     return 0;
}
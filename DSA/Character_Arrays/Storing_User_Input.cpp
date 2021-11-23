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
     char sentence[1000];
     char temp=cin.get();
     int len=0;
     while(temp!='\n')
     {
         sentence[len++]=temp;
         temp=cin.get();
     }
     sentence[len]='\0';
     cout<<"Length"<<len<<endl;
     cout<<sentence<<endl;
     return 0;
}
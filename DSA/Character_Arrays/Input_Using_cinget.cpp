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
     char sentence[100];
     char temp=cin.get();
     int len=1;
     //Terminate at newline
     // while(temp!='\n')
     // {
     //      len++;
     //      cout<<temp;
     //      temp=cin.get();
     // }
     
     //Terminate at #
     while(temp!='#')
     {
          len++;
          cout<<temp;
          temp=cin.get();
     }
     cout<<endl;
     cout<<"Length:"<<len<<endl;
     return 0;
}
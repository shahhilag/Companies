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
     char ch;
     ch = cin.get();
     
     int digit=0;
     int alphabet=0;
     int space=0;

     while(ch!='\n')
     {
         if(ch>='0' and ch<='9')
         {
            digit++; 
         }
         else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
         {
             alphabet++;
         }
        else if(ch == ' ' or ch =='\t')
        {
			space++;
		}
         ch=cin.get();
     }
     cout<<"Total Alphabets"<<" "<<alphabet<<endl;
     cout<<"Total Digits"<<" "<<digit<<endl;
     cout<<"Total Spaces"<<" "<<space<<endl;
     return 0;
}
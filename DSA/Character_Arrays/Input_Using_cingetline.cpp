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
    //  cin.getline(sentence,1000);
    //  cin.getline(sentence,1000,'\n');//Default
     cin.getline(sentence,1000,'#');
     cout<<sentence<<endl;
     return 0;
}
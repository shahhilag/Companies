#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void findSubsets(char *input,char *output,int i,int j)
{
    //Base case
    if(input[i]=='\0')
    {
        output[j]='\0';
        if(output[0]=='\0')
        {
            cout<<"NULL";
        }
        cout<<output<<endl;
        return;
    }
    //Rec Case
    output[j]=input[i];
    findSubsets(input,output,i+1,j+1); 
    findSubsets(input,output,i+1,j);  
}

int main()
{
     dfile();
     char input[100];
     char output[100];
     cin>>input;
     findSubsets(input,output,0,0);
     return 0;
}
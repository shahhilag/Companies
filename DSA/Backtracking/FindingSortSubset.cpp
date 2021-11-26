#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool compare(string a,string b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    return a.length()<b.length();
}

void findSubsets(char *input,char *output,int i,int j,vector<string> &list)
{
    //Base case
    if(input[i]=='\0')
    {
        output[j]='\0';
        string temp(output);
        list.push_back(temp);
        return;
    }
    //Rec Case
    output[j]=input[i];
    findSubsets(input,output,i+1,j+1,list); 
    findSubsets(input,output,i+1,j,list);  
}

int main()
{
     dfile();
     vector<string> list;
     char input[100];
     char output[100];
     cin>>input;
     findSubsets(input,output,0,0,list);
     sort(list.begin(),list.end(),compare);
     for(string s:list)
     {
         cout<<s<<",";
     }
     return 0;
}
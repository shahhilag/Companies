#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool arePermutation(string A, string B)
{
    int n1 = A.length();
    int n2 = B.length();
    if (n1 != n2)
    {
         return false;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < n1;  i++)
    {
       if (A[i] != B[i])
       {
            return false;
       }
       else
       {
            return true;
       }
    }
     
  
}

int main()
{
     dfile();
     string s1;
     string s2;
     cin>>s1>>s2;
     cout<<arePermutation(s1,s2);
     return 0;
}
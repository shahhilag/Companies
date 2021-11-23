#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int binomialCoeff(int n, int k);
vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> res;
    for (int line = 0; line < n; line++)
    {
        vector<int> v;
        for (int i = 0; i <= line; i++)
         {v.push_back(binomialCoeff(line, i));}
         res.push_back(v);
    }
return res;
}
 
int binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<vector<int>> ans =   printPascal(n);
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<=i;j++)
         {
             cout<<ans[i][j]<<" ";
         }
         cout<<endl;
     }   
     return 0;
}
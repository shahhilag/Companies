#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int FindNumber(vector<int> &A)
{
    int counter=1;
    sort(A.begin(),A.end());
    if(A[A.size()-1]<=0)
    {
        return 1;
    }
    else
    {
        for(int i=0;i<A.size();i++)
        {
            if(A[i]<1)
            {
                continue;
            }
            else if(A[i]==counter and A[i+1]==counter+1)
            {
                counter++;
            }
            else if(A[i]==counter and A[i+1]==counter)
            {
                continue;
            }
            else if(A[i]!=counter and A[i+1]!=counter)
            {
                return counter;
            }
            else
            {
                return counter+1;
            }
        }
    }
}
int main()
{
    dfile();
    vector<int> A;
    A={};
    cout<<FindNumber(A);
    return 0;
}
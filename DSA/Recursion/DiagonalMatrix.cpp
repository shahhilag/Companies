#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

//You are given a 2d matrix and you need to go from top left to the bottom of the matrix.Print all possible Paths and also print the count.
//Input: m,n 

//Recursive Intution-If you give me the combinations for (N-1) subproblem then if I append
//1.R+subproblem------>I get the 1/2 solution
//2.D+subproblme------>I get other 1/2 solution
int totalPaths=0;
void mazePath(int i,int j,int n,int m,string osf)
{
    //Base Case
    if(i==n-1 and j==m-1)
    {
        //We found the destination
        totalPaths+=1;
        cout<<osf<<endl;
        return;
    }
    //Do not exit grid
    if(i>=n or j>=m)
    {
        return;
    }
    mazePath(i,j+1,n,m,osf+"R");//right move
    mazePath(i+1,j,n,m,osf+"D");//downward move//osf-output so far
    mazePath(i+1,j+1,n,m,osf+"d");//traversal where diagonal is allowed
}

int main()
{
     dfile();
     mazePath(0,0,3,3,"");
     cout<<"Total Paths="<<totalPaths<<endl; 
     return 0;
}
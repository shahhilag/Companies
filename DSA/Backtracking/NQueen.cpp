#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

bool canPlace(int board[][20],int n,int x,int y)
{
    for(int k=0;k<x;k++)
    {
        //Column
        if(board[k][y]==1)
        {
            return false;
        }
    }
        //Left Diagonal
        int i=x;
        int j=y;
        while(i>=0 and j>=0)
        {
            if(board[i][j]==1)
            {
                return false;
            }
            i--;
            j--;
        }
        //Right Diagonal
        i=x;
        j=y;
        while(i>=0 and j<n)
        {
            if(board[i][j]==1)
            {
                return false;
            }
            i--;
            j++;
        }
        return true;
}
void printNQueen(int board[][20],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveNQueen(int board[][20],int n,int i)
{
    //Base Case
    if(i==n)
    {
        printNQueen(board,n);
        return true;
    }
    //Rec Case
    for(int j=0;j<n;j++)
    {
        if(canPlace(board,n,i,j))
        {
            //Place queen
            board[i][j]=1;
            bool success=solveNQueen(board,n,i+1);
            if(success)
            {
                return true;
            }
            //Backtrack
            board[i][j]=0; 
        } 
    }
    return false;
}

int main()
{
     dfile();
     //Make a board
     int board[20][20]={0};
     int n;
     cin>>n;
     cout<<solveNQueen(board,n,0);
     return 0;
}
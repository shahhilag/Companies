#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 
bool value;
void helper(vector<vector<char>>& board, string &word, int i, int j, int k)
{
    if(k == word.size())
    {
        value = true;
        return;
    }
    if(i < 0 or j < 0 or i == board.size() or j == board[0].size() or board[i][j] == char(-1))
        return;
    
    if(board[i][j] == word[k])
    {
        char c = board[i][j];
        board[i][j] = char(-1);
        helper(board, word, i, j+1, k+1);
        helper(board, word, i+1, j, k+1);
        helper(board, word, i, j-1, k+1);
        helper(board, word, i-1, j, k+1);
        board[i][j] = c;
    }
    return;
}
bool wordSearch(vector<vector<char>> &board, string word)
{
    value  = false;
    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[0].size(); j++)
        {
            if(board[i][j]==word[0])
                helper(board, word, i, j, 0);
        }
    }
    
    return value;
}

int main()
{
     dfile();
     int m,n;
     cin>>m>>n;
     vector<vector<char>> board;
     vector<char> cell;
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
            char x;
            cin>>x;
            cell.push_back(x);
         }
         board.push_back(cell);
         cell.clear();
     }
     string word;
     cin>>word;
     cout<<wordSearch(board,word);
     return 0;
}
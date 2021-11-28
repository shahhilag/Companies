#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int cnt = 0;
void help(string s, int n, string res, vector<string> &word)
{
	for (int i = 1; i <= n; i++)
	{
		string ss = s.substr(0, i);
		int l = word.size();
		bool flag = false;

		for (int j = 0; j < l; j++)
			if (word[j] == ss)
				flag = true;

		if (flag)
		{
			if (i == n)
			{
				res += ss;
				cnt++;
				return;
			}
			help(s.substr(i, n), n-i, res + ss + " ", word);
		}
	}
}

int wordBreak(string s, vector<string> &dictionary)
{
	help(s, s.size(), "", dictionary);
	return cnt;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<string> dictionary(n);
     for(int i=0;i<n;i++)
     {
         cin>>dictionary[i];
     }
     string str;
     cin>>str;
     cout<<wordBreak(str,dictionary);
     return 0;
}
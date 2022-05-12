#include<bits/stdc++.h>
using namespace std;

void dfile()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
} 

string leftRotate(string str, int d) {
	while(d>str.length())
	{
		d-=str.length();
	}
	string temp1="";
	for(int i=0;i<d;i++)
	{
		temp1+=str[i];
	}
	string temp2="";
    for(int i=d;i<str.length();i++)
	{
		temp2+=str[i];
	}
	string ans1=temp2+temp1;
	return ans1;
}

string rightRotate(string str, int d) {
	while(d>str.length())
	{
		d-=str.length();
	}
    string temp1="";
	for(int i=0;i<(str.length()-d);i++)
	{
		temp1+=str[i];
	}
	string temp2="";
	for(int i=(str.length()-d);i<str.length();i++)
	{
		temp2+=str[i];
	}
	string ans2=temp2+temp1;
	return ans2;
}

int main()
{
	dfile();
	int t;
	cin>>t;
	cin.get();
	while(t--)
	{
		string str;
		getline(cin,str);
		int d;
		cin>>d;
		cout<<leftRotate(str,d)<<" "<<rightRotate(str,d)<<endl;
		cin.get();
	}
	return 0;
}
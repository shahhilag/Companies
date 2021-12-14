#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

// vector<int> stockSpanner(vector<int> &stocks)
// {
//     int n=stocks.size();
//     int counter=0;
//     vector<int> vcounter;
//     stack<int> s;
//     for(int i=0;i<n;i++)
//     {
//         s.push(stocks[i]);
//         for(int j=0;j<=i;j++)
//         {
//             if(stocks[i]>stocks[j])
//             {
//                 s.push(stocks[j]);
//             }
//         }
//         while(!s.empty())
//         {
//             counter++;
//             s.pop();
//         }
//         vcounter.push_back(counter);
//         counter=0;
//     }    
//     return vcounter;
// }
vector<int> stockSpanner(vector<int> &stocks){
	stack <int> s;
	int n = stocks.size();
	s.push(0);
	vector<int> arr(n, 1);
	for (int i = 1; i < n; i++) {
		while (!s.empty() and stocks[s.top()] <= stocks[i]) {
			s.pop();
		}
		if (!s.empty()) {
			arr[i] = i - s.top();
		} else arr[i] = i + 1;
		s.push(i);
	}
	return arr;
}

int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> stocks;
     for(int i=0;i<n;i++)
     {
         int data;
         cin>>data;
         stocks.push_back(data);
     }    
     vector<int> ans=stockSpanner(stocks);
     for(int x:ans)
     {
         cout<<x<<" ";
     }
     return 0;
}
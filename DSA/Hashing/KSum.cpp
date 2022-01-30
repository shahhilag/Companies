#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

int longestSubarrayKSum(vector<int> arr,int k)
{
    int n = arr.size();
	unordered_map<int,int> m;
	int pre = 0;
	int len = 0;

	for(int i=0;i<n;i++){
		pre += arr[i];

		if(pre==k){
			len = max(len,i+1);
		}

		if(m.find(pre-k)!=m.end()){
			len = max(len,i - m[pre-k]);
		}
		else{
			//store the first occ
			m[pre] = i;
		}

	}
	return len;
}


int main()
{
    dfile();
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        v.push_back(data);
    }
    int k;
    cin>>k;
    longestSubarrayKSum(v,k);
    return 0;
}
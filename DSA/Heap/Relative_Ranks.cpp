#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

vector<string> findRelativeRanks(vector<int> &score)
{
    priority_queue<pair<int,int>> pq;
        for(int i=0; i<score.size(); i++){
            pq.push({score[i],i});
        }
       
    int n= score.size();
    vector<string> vec(n);
    int cnt=0;
    
    while(!pq.empty()){
        cnt++;
        if(cnt==1){
            vec[pq.top().second].append("Gold Medal");
        }
        else if(cnt==2){
            vec[pq.top().second].append("Silver Medal");
        }
        else if(cnt==3){
            vec[pq.top().second].append("Bronze Medal");
        }
        else {
            vec[pq.top().second].append(to_string(cnt));
        }
        pq.pop();
    }
    return vec;
}

int main()
{
    dfile();
    int n;
    cin>>n;
    vector<int> score;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        score.push_back(data);
    }
    vector<string> ans=findRelativeRanks(score);
    for(string x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void bottomInsertion(stack<int> &s,int data)
{
    //Base Case
    if(s.empty())
    {
        s.push(data);
        return;
    }

    //Rec Case
    int temp=s.top();
    s.pop();
    bottomInsertion(s,data);
    
    //Backtracking
    s.push(temp);//While coming back
}

void revereseStack(stack<int> &s)
{
    //Base Case
    if(s.empty())
    {
        return;
    }
    //Rec Case
    int temp=s.top();
    s.pop();
    revereseStack(s);

    //Backtracking 
    bottomInsertion(s,temp);
}

int main()
{
     dfile();
     stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     //bottomInsertion(s,5);
     cout<<"Before Reversal:"<<endl;
      while(!s.empty())
     {
        cout<<s.top()<<endl;
        s.pop();
     }
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     revereseStack(s);
     cout<<"After Reversal:"<<endl;
     while(!s.empty())
     {
        cout<<s.top()<<endl;
        s.pop();
     }
     return 0;
}
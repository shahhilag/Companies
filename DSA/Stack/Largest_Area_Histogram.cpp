#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

int getMaxArea(vector<int> hist)
{
  int n=hist.size();  
  //If no smaller element is found we give a default value equal to n to it
  vector<int> rb(n,n);//To store the index of right boundary

  //Stack to store indexes
  stack<int> s1;
  s1.push(hist.size()-1);//Last element's index would be placed in the stack as we start form the rightmost point
  //Loop from right to left(For right boundary)
  for(int i=n-2;i>=0;i--)//Last element already pushed in stack thus we loop from i=n-2----->0
  {
      //If the value of hist[i](current element) is less than or equal to the value of the top element in the stack then all the elements are pushed until and unless we reach a element which is less than  the current element(As this is the boundary)
      while(s1.size()>0 and hist[i]<=hist[s1.top()])
      {
          s1.pop();
      }
      if(s1.size()==0)
      {
          rb[i]=n;//If the stack becomes empty means there are no smaller elements on the right side of and thus the last element is the boundary
      }
      else
      {
        rb[i]=s1.top();//Element smaller than the current element is the topmost element of the stack as it cannot be popped by the current element
      }
      s1.push(i);//After the completion we push current index in the stack for comparison
  }

  vector<int> lb(n,-1);//To store the index of left boundary.Default index=-1
  stack<int> s2;
  s2.push(0);//First element's index would be placed in the stack as we start form the leftmost point
  //Loop from left to right(For left boundary)
  for(int i=1;i<n;i++)//First element already pushed in stack thus we loop from i=1----->n-1
  {
      //If the value of hist[i](current element) is less than or equal to the value of the top element in the stack then all the elements are pushed until and unless we reach a element which is less than  the current element(As this is the boundary)
      while(s2.size()>0 and hist[i]<=hist[s2.top()])
      {
          s2.pop();
      }
      if(s2.size()==0)
      {
          lb[i]=-1;//If the stack becomes empty means there are no smaller elements on the right side of and thus the first element is the boundary
      }
      else
      {
        lb[i]=s2.top();//Element smaller than the current element is the topmost element of the stack as it cannot be popped by the current element
      }
       s2.push(i);//After the completion we push current index in the stack for comparison
  }

  int maxArea=0;
  for(int i=0;i<hist.size();i++)
  {
      int width=rb[i]-lb[i]-1;
      int area=hist[i]*width;
      if(area>maxArea)
      {
          maxArea=area;
      }
  }
  return maxArea;
}


int main()
{
     dfile();
     int n;
     cin>>n;
     vector<int> hist;
     for(int i=0;i<n;i++)
     {
         int data;
         cin>>data;
         hist.push_back(data);
     }
     int ans=getMaxArea(hist);
     cout<<ans<<endl;   
     return 0;
}
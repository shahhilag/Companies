 int m=arr.size();
  int n=arr[0].size();
  int x=1;
  int y=1;
  for(int j=0;j<n;j++)
  {
      if(arr[0][j]==0) x=0;
  }  
  for(int i=0;i<m;i++)
  {
      if(arr[i][0]==0) y=0;
  }
  //inner matrix
  for(int i=1;i<m;i++)
  {
      for(int j=1;j<n;j++)
      {
          if(arr[i][j]==0)
          {
          arr[i][0]=0;
          arr[0][j]=0;  
          }
      }
  }
  for(int j=1;j<n;j++)
  {
      if(arr[0][j]==0)
      {
          for(int i=0;i<m;i++)
          {
              arr[i][j]=0;
          }
      }
  }
  for(int i=1;i<m;i++)
  {
      if(arr[i][0]==0)
      {
          for(int j=0;i<n;i++)
          {
              arr[i][j]=0;
          }
      }
  }
  if(y==0)
  {
      for(int i=0;i<m;i++)
      {
          arr[i][0]=0;
      }
  }
  if(x==0)
  {
      for(int j=0;j<n;j++)
      {
          arr[0][j]=0;
      }
  }
  return arr;
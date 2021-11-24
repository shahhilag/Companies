#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

void merge_row(vector<vector<int>> &v,int i, int sy, int my, int ey){
   vector<int> sorted;
   int x=sy;
   int y=my+1;
   //cout<<x<<" "<<my<<" "<<y<<" "<<ey<<endl;
   while(x<=my && y<=ey){
       if(v[i][x]<v[i][y]){
           sorted.push_back(v[i][x]);
           x++;
       }
       else{
           sorted.push_back(v[i][y]);
           y++;
       }
   }
   
   
   while(x<=my){
       sorted.push_back(v[i][x]);
       x++;
   }
   while(y<=ey){
       sorted.push_back(v[i][y]);
       y++;
   }
   int k=0;
   for(int j=sy; j<=ey; j++){
       v[i][j]=sorted[k];
       k++;
   }
}
void merge_col(vector<vector<int>> &v,int j, int sx, int mx, int ex){
       vector<int> sorted;
   int x=sx;
   int y=mx+1;
   while(x<=mx && y<=ex){
       if(v[x][j]<v[y][j]){
           sorted.push_back(v[x][j]);
           x++;
       }
       else{
           sorted.push_back(v[y][j]);
           y++;
       }
   }
   while(x<=mx){
       sorted.push_back(v[x][j]);
       x++;
   }
   while(y<=ex){
       sorted.push_back(v[y][j]);
       y++;
   }
   int k=0;
   for(int i=sx; i<=ex; i++){
       v[i][j]=sorted[k];
       k++;
   }    
   return;
}


void merge(int m, int n, vector<vector<int>> &v, int sx, int mx, int ex,int sy, int my, int ey){
    
    //for sorting rows
    for(int i=sx; i<=ex; i++){
        merge_row(v,i,sy,my,ey);
    }
    
    //for sorting columns
    for(int j=sy; j<=ey; j++){
        merge_col(v,j,sx,mx,ex);
    }
    return;

}

void merge_sort(int m, int n, vector<vector<int>> &v, int sx, int ex, int sy, int ey){
     if(sx>=ex && sy>=ey){
         return;
     }


     int mx=(sx+ex)/2;
     int my=(sy+ey)/2;
      
    // cout<<sx<<" "<<mx<<" "<<ex<<" "<<sy<<" "<<my<<" "<<ey<<endl; 
     
     
     //for dividing into subarrays
     merge_sort(m,n,v,sx,mx,sy,my);
     merge_sort(m,n,v,mx+1,ex,sy,my);
     merge_sort(m,n,v,sx,mx,my+1,ey);
     merge_sort(m,n,v,mx+1,ex,my+1,ey);

     
    //for merging sorted subarrays
     merge(m,n,v,sx,mx,ex,sy,my,ey);
     return;
}

vector<vector<int>> mergeSort(int m, int n, vector<vector<int>> v){
    merge_sort(m,n,v,0,m-1,0,n-1);
    return v;
}

int main()
{
     dfile();
     int m,n;
     cin>>m>>n;
     vector<vector<int>> v;
     vector<int> v1; 
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
            int x;
            cin>>x;
            v1.push_back(x);
         }
         v.push_back(v1);
         v1.clear();
     }   
     vector<vector<int>> ans=mergeSort(m,n,v);
     for(int i=0;i<ans.size();i++)
     {
         for(int j=0;j<ans[i].size();j++)
         {
             cout<<ans[i][j]<<" ";
         }
         cout<<endl;
     }      
     return 0;
}
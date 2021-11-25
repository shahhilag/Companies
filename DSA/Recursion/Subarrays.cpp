#include<bits/stdc++.h>
using namespace std;

void dfile()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
} 

//Two Calls will be made on f(arr,i,osf)
//1.f(arr,i+1,osf+arr[i])----->arr[i] included
//2.f(arr,i+1,osf)------->arr[i] not included
void printSubset(int arr[], int i,int n,string osf)
{
    //Base Case
    if(i==n)
    {
        cout<<"["<<osf<<"]"<<endl;
        return;
    }
    //Element included
    printSubset(arr,i+1,n,osf + to_string(arr[i]) + ",");//Convert to string as array is integer
    //Element not included
    printSubset(arr,i+1,n,osf);
}

int main()
{
     dfile();
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     printSubset(a,0,n,"");
     return 0;
}
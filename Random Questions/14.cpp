#include<bits/stdc++.h>
using namespace std;

void dfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

void getTwoElements(int arr[], int n,int &x, int &y)
{
    int xor1;
    int rightmost;

    int i;
    x = 0;
    y = 0;

    xor1 = arr[0];

    //arr[i] for finding the repeating value ans i for finding the missing value
    for (i = 1; i < n; i++) xor1=xor1^arr[i];
    for (i = 1; i <= n; i++) xor1 = xor1 ^ i;

    //Rightmost set bit
    rightmost = xor1 & ~(xor1 - 1);

    //Grouping
    for (i = 0; i < n; i++) {
        if (arr[i] & rightmost) x = x ^ arr[i];
        else y = y ^ arr[i];
    }
    for (i = 1; i <= n; i++) {
        if (i & rightmost) x = x ^ i;
        else y = y ^ i;
    }
}

int main()
{
    dfile();
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    int y;
    getTwoElements(arr, n, x, y);
    cout << " The missing element is " << x << " and the repeating"<< " number is " << y;
    return 0;
}
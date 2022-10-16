#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int data)
{
    int l=0;
    int r=n-1;
    int m;
    while(l<=r)
    {
       m=(l+r)/2;
       if(a[m]>data)
       r=m-1;
       if(a[m]<data)
       l=m+1;
       if(a[m]==data)
       {
        return m;
       } 
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int data;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>data;
    cout<<binary_search(a,n,data);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int data,int l,int r)
{     if(l>r) return -1;
      int  m=(l+r)/2;
       if(a[m]>data)
          return binary_search(a,data,l,m-1);
       else if(a[m]<data)
        return binary_search(a,data,m+1,r);
       else
        return m;
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
    sort(a,a+n);
    cout<<binary_search(a,data,0,n-1);
    return 0;
}

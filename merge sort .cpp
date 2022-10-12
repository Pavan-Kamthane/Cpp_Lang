// merge sort
#include <iostream>

using namespace std;

void merge(int a[],int b[],int x,int y,int c[])
{
    int z=0,i=0,j=0,k=0;
    while(i<x && j<y)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<x)
        c[k++]=a[i++];
    while(j<y)
        c[k++]=b[j++];
}
int main()
{
    int a[100],b[100],c[100],x,y;
    cout<<"Enter the sizes of the arrays";
    cin>>x>>y;
    cout<<"ENter array 1:";
    for(int i=0;i<x;i++)
        cin>>a[i];
    cout<<"Enter Array 2:";
    for(int i=0;i<y;i++)
        cin>>b[i];
    merge(a,b,x,y,c);
    for(int i=0;i<x+y;i++)
        cout<<c[i]<<"  ";
    return 0;
}

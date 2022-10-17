#include<iostream>
using namespace std;
int main()
{
    int i,j,r,k;
    cout<<"Enter no. of rows u want to print: ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=(r-i);j++)
        
            cout<<"  ";
          for(k=1;k<=i;k++)
           cout<<" *  ";
          cout<<"\n";
    
    }
  
    return 0;
}

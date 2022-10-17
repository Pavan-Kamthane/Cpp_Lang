//WAP to print heart like pattern
#include <iostream>
using namespace std;

int main()
 {int i,j,s;
  cout<<"Enter any number: ";
  cin>>s;

  for(i=s/2; i<s; i=i+2)
   {
    for(j=1;j<s-i;j=j+2)
     {
      cout<<" ";
    }
    for (j=1;j<i+1;j++)
     {
      cout<<"*";
    }
    for (j=1;j<s-i+1;j++)
     {
      cout<<" ";
    }
    for(j=1;j<i+1;j++) 
    {
      cout<<"*";
    }
    cout<<"\n";
  }
  for(i=s;i>0;i--) 
  {
    for(j=0;j<s-i;j++)
     {
      cout<<" ";
    }
    for(j=1;j<i*2;j++)
     {
      cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}

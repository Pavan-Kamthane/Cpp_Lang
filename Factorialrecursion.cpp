//WAP to print factorial of any number
#include <iostream> 
using namespace std;
int fact(int n);
int main()
{
    int n;
    cout<<"Enter any no.:";
    cin>>n;
    int c=fact(n);
    cout<<"It's factorial is "<<c;
    return 0;
 }
 int fact(int n)
 {int f;
 if(n==1 || n==0)
 return 1;
 else
 {f=n*fact(n-1);
 return f;}
 }

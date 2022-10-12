//swapping two numbers using temporary variable

#include <iostream>
using namespace std;
int main() 
{
    int a,b;
    a=15;
    b=40;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}
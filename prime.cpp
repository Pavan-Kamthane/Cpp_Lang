#include<bits/stdc++.h>
using namespace std;
int main ()
{  
    int num, i, count = 0;
    cout <<"Enter the number: ";
    cin >> num;
    if (num == 0)
    {
        cout <<"\n"<<num<<"is not prime";
        exit(1);
    }
    else   
    {
        for(i=2; i < num; i++)
            if (num % i == 0)
                count++;
    }
    if (count > 1)
 	    cout <<"\n"<<num<<"is not prime.";
    else
        cout <<"\n"<<num<<"is prime.";
    return 0;
}
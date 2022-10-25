#include <iostream>
#include <cmath>
using namespace std;
void bintodec(int n)
{
    int rem, dec = 0;
    rem = n % 10;
    n = n / 10;
    dec = rem;
    for (int i = 1; n != 0; i++)
    {
        rem = n % 10;
        dec = pow(2, i) * rem + dec;
        n = n / 10;
    }
    cout << dec << endl;
}
int main()
{
    int bin;
    cin >> bin;
    bintodec(bin);
}

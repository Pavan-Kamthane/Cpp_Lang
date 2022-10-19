#include <iostream>
using namespace std;

void swap1()
{
    int a, b;
    cin >> a >> b;
    // let's swap without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;
}
void swap2()
{
    int c, d;
    cin >> c >> d;
    c = c ^ d;
    d = c ^ d;
    c = c ^ d;
    cout << c << " " << d << endl;
}
int main()
{
    // First swap may not work for large numbers
    // as addition might face integer overflow
    swap1();

    // Second swap works for all numbers
    // as we are doing Bitwise XOR which will not
    // face integer overflow
    swap2();

    return 0;
}
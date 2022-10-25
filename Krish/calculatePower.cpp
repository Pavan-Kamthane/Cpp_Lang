#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll binpow(ll base, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            n--;
            res = res * base;
        }
        else
        {
            n = n / 2;
            base = base * base;
        }
    }
    return res;
}
void solve()
{
    ll n, x;
    cin >> n >> x;
    cout << binpow(x, n) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
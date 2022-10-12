#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int num1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                num1 = (a[i] * 10) + b[i];
                cout << num1 << endl;
            }
            else if (a[i] == b[i])
            {
                num1 = (a[i] * 10) + b[i];
                cout << num1 << endl;
            }
            else
            {
                num1 = (b[i] * 10) + a[i];
                cout << num1 << endl;
            }
        }
        cout<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        // Your code here
        vector<int> v(hashSize, -1);
        for (int i = 0; i < sizeOfArray; i++)
        {
            int k = arr[i] % hashSize;
            int p = k;
            while (v[k] != -1 && v[k] != arr[i])
            {
                k = (k + 1) % hashSize;
                if (k == p)
                    break;
            }
            if (v[k] == -1)
                v[k] = arr[i];
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hashSize;
        cin >> hashSize;

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        vector<int> hash;
        Solution obj;
        hash = obj.linearProbing(hashSize, arr, sizeOfArray);

        for (int i = 0; i < hashSize; i++)
            cout << hash[i] << " ";

        cout << endl;
    }
    return 0;
}

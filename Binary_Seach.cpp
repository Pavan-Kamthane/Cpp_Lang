#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k) // k is key, n is arr size
{
    int lo = 0, hi = n - 1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;

        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[]{2, 5, 8, 12, 17, 24, 36, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 24;

    cout << binarysearch(arr, size, k);

    return 0;
}
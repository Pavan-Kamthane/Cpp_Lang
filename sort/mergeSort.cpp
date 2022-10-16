#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s+e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int firstArray[len1], secondArray[len2];
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        firstArray[i] = arr[mainArrayIndex++];
    
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        secondArray[i] = arr[mainArrayIndex++];
   
    }
    int index1 = 0, index2 = 0;
    mainArrayIndex=s;
    while (index1 < len1 && index2 < len2)
    {
        
        if (firstArray[index1] < secondArray[index2])
        {
            arr[mainArrayIndex++] = firstArray[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = secondArray[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = firstArray[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = secondArray[index2++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s+e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    // 1

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

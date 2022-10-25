// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the last remaining
// array element after repeatedly removing
// the smallest from pairs having absolute
// difference 2 or 0
void findLastElement(int arr[], int N)
{
	// Sort the given array in
	// ascending order
	sort(arr, arr + N);
	int i = 0;

	// Traverse the array
	for (i = 1; i < N; i++) {

		// If difference between
		// adjacent elements is
		// not equal to 0 or 2
		if (arr[i] - arr[i - 1] != 0
			&& arr[i] - arr[i - 1] != 2) {

			cout << "-1" << endl;
			return;
		}
	}

	// If operations can be performed
	cout << arr[N - 1] << endl;
}

// Driver Code
int main()
{
	int arr[] = { 2, 4, 6, 8, 0, 8 };
	int N = sizeof(arr) / sizeof(arr[0]);
	findLastElement(arr, N);

	return 0;
}

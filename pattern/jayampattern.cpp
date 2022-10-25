// C++ program to print
// the given pattern
#include<iostream>
using namespace std;

void pattern(int n)
{
	int i, j;
	
	// This is upper half of pattern
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= (2 * n); j++)
		{
			
			// Left part of pattern
			if (i > (n - j + 1))
				cout << " ";
			else
				cout << "*";
				
			// Right part of pattern
			if ((i + n) > j)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl ;
	}
	
	// This is lower half of pattern
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= (2 * n); j++)
		{
			
			// Right Part of pattern
			if (i < j)
				cout << " ";
			else
				cout << "*";
			
			// Left Part of pattern
			if (i <= ((2 * n) - j))
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	pattern(7);
	
	return 0;
}

// This code is contributed by bunnyram19

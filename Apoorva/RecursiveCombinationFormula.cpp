#include <iostream>
using namespace std;
 
// Function to calculate Combination 
float combination(float n, float r)
{
	int i, res;
	if(r > 0)
		return (n / r) * combination(n - 1, r - 1);
	else 
		return 1;
}
 
int main()
{
	float n, r;
	int result;
	cout<<"\nProgram for calculating Combination ( nCr formula )";
	cout<<"\n\nEnter the value of n = ";
	cin>>n;
	cout<<"\nEnter the value of r = ";
	cin>>r;
 
	cout<<"\n\nNumber of possible Combinations = "<<combination(n, r);
}

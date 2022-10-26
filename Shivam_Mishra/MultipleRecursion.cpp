// Fibonacci series by multiple recursion example

#include<iostream>
using namespace std;

int Fibbo(int n)
{
	if(n<1)
		return 0;
	if(n==1)
		return 1;
	int flast = Fibbo(n-1);
	int slast = Fibbo(n-2);
	return flast+slast;
}
int main()
{
	int n;
	cout << "Enter no for fibbonacci term : ";
	cin >> n;
	cout << Fibbo(n-1);
	return 0;
}
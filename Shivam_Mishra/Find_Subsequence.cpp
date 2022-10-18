#include<bits/stdc++.h>
using namespace std;

#include<vector>
using namespace std;
void printS(int ind,vector<int> &ds,int sum,int givenSum,int arr[],int n)
{
	// Base Condition
	if(ind==n){
		if(sum==givenSum){
			for(auto it : ds) cout<< it <<" ";
			cout << endl;
		}
		return;
	}
   
	ds.push_back(arr[ind]);  // push into vector
    
	sum+=arr[ind]; // Add to sum
	
	printS(ind+1,ds,sum,givenSum,arr,n); // call again
    // When return from previous recursion below execute
	sum-=arr[ind]; // Subtract prevoius added value
	ds.pop_back(); // and also pop back from vector
	
	printS(ind+1,ds,sum,givenSum,arr,n); // Again call recursion
}
	
int main()
{
	int arr[] ={1,2,1};
	int n=3;
	int givenSum = 2;
	vector<int> ds;
	printS(0,ds,0,givenSum,arr,n);
	return 0;
}
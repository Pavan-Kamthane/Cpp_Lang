//SELECTION SORT 
//TIME COMPLEXITY - O(N^2)
//SPACE COMPLEXITY - O(1)
#include<bits/stdc++.h>
using namespace std;
//function to swap the elements
void swap(int *p,int *q){
  int temp=*p;
  *p=*q;
  *q=temp;
}  
//SELECTION SORT
void selectionSort(vector<int> &v,int n){
  for(int i=0;i<n-1;i++){
    int x=i;
    for(int j=i+1;j<n;j++){
      if(v[j]<v[x])
        x=j;
      if(x!=i)
        swap(&v[x],&v[i]);
    }
  }
}
int main(){
  int n;
  cout<<"Enter No. of Elements:";
  cin>>n;
  vector<int> v(n,0);
  cout<<"Enter Elements:"<<endl;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v[i]=a;
  }
  selectionSort(v,n);
  cout<<"After Sorting:"<<endl;
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return 0;
}


//OUTPUT
/*
Enter No. of Elements:5
Enter Elements:
5
3
8
2
9
After Sorting:
5 3 8 2 9 
*/

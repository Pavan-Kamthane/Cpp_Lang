#include<iostream>
using namespace std;

int sumof(int num[],int n){
    int sum=0;
  for(int i=0; i<n; i++){
     sum=num[i]+sum;
  }
return sum;
}
int main(){

   int n;
   cin>>n;
    int num[100];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
   
    cout<<"the sum of all value of array:"<<sumof(num,n)<<endl;
}

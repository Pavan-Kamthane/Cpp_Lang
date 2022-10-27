#include <iostream>
using namespace std;

/*
--> 5
Output:
    *
    * *
    * * *
    * * * *
    * * * * *
*/

int main(){
    cout << "-->";
    int a;
    cin >> a;
    for(int i = 0; i<a;i++){
        for(int j =0;j<i+1;j++){
            cout << "* ";
        }cout << "\n";
    }
}
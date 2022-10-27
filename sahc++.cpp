#include <iostream>
using namespace std;
 
int main() {
    int xsize, ysize, * swap;
    int row1, row2;
 
    cout << "Enter the size of matrix : ";
    cin >> ysize >> xsize;
    int ** matrix = new int*[ysize];
    // initialising columns for each row
    for(int i = 0; i < ysize; i++) {
        matrix[i] = new int[xsize];
    }
    // taking value corresponding to each cell from input
    cout << "Enter the matrix\n";
    for(int i = 0; i < ysize; i++) {
        for(int j = 0; j < xsize; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the rows to be interchanged : ";
    cin >> row1 >> row2;
    // interchanging the rows
    swap = matrix[row1 - 1];
    matrix[row1 - 1] = matrix[row2 - 1];
    matrix[row2 - 1] = swap;
    // printing the values
    cout << "New Matrix\n";
    for(int i = 0; i < ysize; i++) {
        for(int j = 0; j < xsize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

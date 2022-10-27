/*Take as input a 2-d array.Print the 2-D array in sprial form clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END
Explanation
For spiral level clockwise traversal, Go for first row-> last column ->last row -> first column and then do the same traversal for the remaining matrix .*/

#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int sr, er, sc, ec;
    sr = sc = 0;
    er = n - 1;
    ec = m - 1;
    while (sr <= er and sc <= ec)
    {
        // 1.Print sr from sc to ec
        for (int col = sc; col <= ec; ++col)
        {
            cout << a[sr][col] << ", ";
        }
        sr++;

        //     // 2.Print ec from sr to er
        for (int row = sr; row <= er; ++row)
        {
            cout << a[row][ec] << ", ";
        }
        ec--;

        // 3.Print er from ec to sc
        if (sr <= er)
        {
            for (int col = ec; col >= sc; --col)
            {
                cout << a[er][col] << ", ";
            }
            er--;
        }

        // 4.Print sc from er to sr
        if (sc <= ec)
        {
            for (int row = er; row >= sr; --row)
            {
                cout << a[row][sc] << ", ";
            }
            sc++;
        }
    }
    cout << "END";
    return 0;
}
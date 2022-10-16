#include <iostream>
#include <vector>
using namespace std;
// practice --> https://leetcode.com/problems/longest-common-subsequence/

// Please revise in this order
// Recursion -> Memoization -> Tabulation -> Space Optimization

//
// Approaches ->

// Recursive Approach ------------------------------------------

int rec(string &s1, string &s2, int index1, int index2)
{
    // base case
    if (index1 < 0 or index2 < 0)
        return 0;

    // if chars from both pointers matches
    if (s1[index1] == s2[index2])
        return 1 + rec(s1, s2, index1 - 1, index2 - 1);

    return 0 + max(rec(s1, s2, index1 - 1, index2), rec(s1, s2, index1, index2 - 1));
}

int longestCommonSubsequence_rec(string text1, string text2)
{
    int m = text1.size(), n = text2.size();
    return rec(text1, text2, m - 1, n - 1);
}

// Memoized Approach ------------------------------------------

int mem(string &s1, string &s2, int index1, int index2, vector<vector<int>> &dp)
{
    // base case
    if (index1 < 0 or index2 < 0)
        return 0;

    if (dp[index1][index2] != -1)
        return dp[index1][index2];

    // if chars from both pointers matches
    if (s1[index1] == s2[index2])
        return dp[index1][index2] = 1 + mem(s1, s2, index1 - 1, index2 - 1, dp);

    return dp[index1][index2] = 0 + max(mem(s1, s2, index1 - 1, index2, dp), mem(s1, s2, index1, index2 - 1, dp));
}

int longestCommonSubsequence_mem(string text1, string text2)
{
    int m = text1.size(), n = text2.size();

    vector<vector<int>> dp(m, vector<int>(n, -1)); // dp

    return mem(text1, text2, m - 1, n - 1, dp);
}

// Tabulated Approach ------------------------------------------

int longestCommonSubsequence_tab(string text1, string text2)
{
    int m = text1.size(), n = text2.size();

    vector<vector<int>> dp(m, vector<int>(n)); // dp

    for (int index1 = 0; index1 < m; index1++)
    {
        for (int index2 = 0; index2 < n; index2++)
        {
            if (text1[index1] == text2[index2]) // either you can use condition here for out of bound or you can make and extra row and column in pd table and initialize with zero, like we did in the below function
                dp[index1][index2] = (index1 - 1 < 0 or index2 - 1 < 0) ? 1 + 0 : 1 + dp[index1 - 1][index2 - 1];
            else
                dp[index1][index2] = 0 + max((index1 - 1 < 0) ? 0 : dp[index1 - 1][index2], (index2 - 1 < 0) ? 0 : dp[index1][index2 - 1]);
        }
    }
    return dp[m - 1][n - 1];
}

// Space Optimized Approach ------------------------------------------

int longestCommonSubsequence(string text1, string text2)
{
    int m = text1.size(), n = text2.size();

    vector<int> dp(n); // dp

    for (int index1 = 0; index1 < m; index1++)
    {
        vector<int> temp(n);

        for (int index2 = 0; index2 < n; index2++)
        {
            if (text1[index1] == text2[index2])
                temp[index2] = (index1 - 1 < 0 or index2 - 1 < 0) ? 1 + 0 : 1 + dp[index2 - 1];
            else
                temp[index2] = 0 + max((index1 - 1 < 0) ? 0 : dp[index2], (index2 - 1 < 0) ? 0 : temp[index2 - 1]);
        }

        dp = temp;
    }

    //**** This will just print the lcs, using the last row of dp and the changes in numbers
    // int sp = 1;

    // for (int i = 0; i < dp.size(); i++)
    // {
    //     if (dp[i] == sp)
    //     {
    //         cout << text2[i];
    //         sp++;
    //     }
    // }
    // cout << endl;

    return dp[n - 1];
}

//
//
//
// alternate tabulation approach
int lcs(int x, int y, string s1, string s2)
{
    vector<vector<int>> dp(x + 1, vector<int>(y + 1));

    for (int i = 0; i < x; i++)
        dp[i][0] = 0;
    for (int i = 0; i < y; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[x][y];
}

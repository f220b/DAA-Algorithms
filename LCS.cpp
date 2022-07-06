#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lcs(char *X, char *Y, int m, int n)
{
    int L[m + 1][n + 1];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];
}

int main()
{
    int n, m;
    cin >> m >> n;
    char X[m];
    char Y[n];
    cin >> X;
    cin >> Y;
    cout << "the longest common subsequence is: " << lcs(X, Y, m, n);
    return 0;
}
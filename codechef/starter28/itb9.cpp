#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int b[m][n];
    while (k > 0)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    b[i][j] = (a[i + 1][j] + a[i][j + 1]) / 2;
                else if (i == 0 && j == n - 1)
                    b[i][j] = (a[i + 1][j] + a[i][j - 1]) / 2;
                else if (i == m - 1 && j == 0)
                    b[i][j] = (a[i - 1][j] + a[i][j + 1]) / 2;
                else if (i == m - 1 && j == n - 1)
                    b[i][j] = (a[i - 1][j] + a[i][j - 1]) / 2;
                else if (i > 0 && i < m - 1 && j == 0)
                    b[i][j] = (a[i + 1][j] + a[i - 1][j] + a[i][j + 1]) / 3;
                else if (i > 0 && i < m - 1 && j == n - 1)
                    b[i][j] = (a[i + 1][j] + a[i - 1][j] + a[i][j - 1]) / 3;
                else if (j > 0 && j < n - 1 && i == 0)
                    b[i][j] = (a[i][j + 1] + a[i][j - 1] + a[i + 1][j]) / 3;
                else if (j > 0 && j < n - 1 && i == m - 1)
                    b[i][j] = (a[i][j + 1] + a[i][j - 1] + a[i - 1][j]) / 3;
                else
                    b[i][j] = (a[i][j + 1] + a[i][j - 1] + a[i - 1][j] + a[i + 1][j]) / 4;
            }
        }
        k--;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                a[i][j] = b[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    return 0;
}

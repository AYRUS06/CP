#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a[9][9];
    int sum = 0;
    int rows = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        if (sum == 45)
            rows++;
        sum = 0;
    }
    int cols = 0;
    sum = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            sum += a[j][i];
        }
        if (sum == 45)
            cols++;
        sum = 0;
    }
    int mat = 0;
    sum = 0;
    for (int i = 0; i < 7; i = i + 3)
    {
        for (int j = 0; j < 7; j = j + 3)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int p = 0; p < 3; p++)
                {
                    sum += a[i + k][i + p];
                }
            }
            if (sum == 45)
                mat++;
            sum = 0;
        }
    }
    cout << rows << endl;
    cout << cols << endl;
    cout << mat << endl;

    cout << mat + rows + cols << endl;
    return 0;
}
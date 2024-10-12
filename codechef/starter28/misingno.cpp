#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    long long int b[n] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        b[a[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            k = k + a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << k << endl;

    return 0;
}
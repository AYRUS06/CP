#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    long long int final_sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum - a[i];
        final_sum += a[i] * (sum);
    }
    cout << final_sum << endl;

    return 0;
}
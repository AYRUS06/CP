#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0];
    int r = 0;
    int min = a[0];
    int l = 0;
    if (a.size() == 1)
        return 0;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (r <= l)
        {
            if (l == a.size() - 1)
                return 0;
            r = l + 1;
            max = a[r];
        }
        else if (a[i] > max)
        {
            max = a[i];
            r = i;
        }
        else if (a[i] < min)
        {
            min = a[i];
            l = i;
        }
    }
    cout << max - min;

    return 0;
}
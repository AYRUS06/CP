#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    ll m;
    cin >> n;
    cin >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    vector<ll> b(n - m);
    ll min = INT_MAX;
    for (ll i = 0; i < n - m; i++)
    {
        b[i] = a[i + m - 1] - a[i];
        min = min < b[i] ? min : b[i];
    }
    cout << min;

    return 0;
}
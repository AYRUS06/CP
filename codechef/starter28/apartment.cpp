#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, k;

    cin >> n >> m >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll b[m];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    ll i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < m)
    {
        if (a[i] + k < b[j])
            i++;
        else if (a[i] - k > b[j])
            j++;
        else
        {
            i++;
            j++;
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
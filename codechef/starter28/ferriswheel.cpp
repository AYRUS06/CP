#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll i = 0, j = n - 1;
    ll ans = 0;
    while (i <= j)
    {
        if (a[i] + a[j] <= m)
        {
            i++;
            j--;
            ans++;
        }
        else if (a[i] + a[j] > m)
        {
            if (a[i] > a[j])
            {
                i++;
                ans++;
            }
            else
            {
                j--;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
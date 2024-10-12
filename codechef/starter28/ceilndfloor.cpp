#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            cout << "ceil value of m " << a[i] << endl;
            cout << "floor value of m " << a[i] << endl;
            break;
        }
        else if (a[i] > m)
        {
            cout << "ceil value of m " << a[i] << endl;
            cout << "floor value of m " << a[i - 1] << endl;
            break;
        }
        else if (a[i] < m && (a[i + 1] > m || i + 1 == n))
        {
            if (i + 1 != m)
                cout << "ceil value of m " << a[i + 1] << endl;
            cout << "floor value of m " << a[i] << endl;
            break;
        }
    }

    return 0;
}
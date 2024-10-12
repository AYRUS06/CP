#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << "YES" << endl;
        else if (a == 0 || b == 0)
            cout << "NO" << endl;
        else if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
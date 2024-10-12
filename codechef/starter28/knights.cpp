#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i == 1)
        {
            cout << 0 << endl;
            i++;
        }
        else if (i == 2)
        {
            cout << 6 << endl;
            i++;
        }
        else
        {
            ll p = i * i;
            ll k = (p * (p - 1)) / 2;
            ll r = k - 4 * (i - 1) * (i - 2);
            cout << r << endl;
            i++;
        }
    }
    return 0;
}
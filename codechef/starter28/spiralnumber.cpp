#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    ll x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {

                ll r = y * y - x + 1;
                cout << r << " " << endl;
            }
            else
            {
                ll r = (y - 1) * (y - 1) + x;
                cout << r << " " << endl;
            }
        }
        else
        {
            if (x % 2 == 1)
            {
                ll r = (x - 1) * (x - 1) + y;
                cout << r << " " << endl;
            }
            else
            {
                ll r = x * x - y + 1;
                cout << r << " " << endl;
            }
        }
    }

    return 0;
}
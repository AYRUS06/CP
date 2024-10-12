#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, temp;
    cin >> n >> m;
    multiset<ll> tickets;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        tickets.insert(temp);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> temp;
        auto it = tickets.upper_bound(temp);
        if (it == tickets.begin())
        {
            cout << "-1\n";
        }
        else
        {
            cout << *(--it) << "\n";
            tickets.erase(it);
        }
    }

    return 0;
}
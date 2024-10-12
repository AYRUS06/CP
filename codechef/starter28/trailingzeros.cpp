#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll c = 0;
    ll k = 5;
    while (k <= n)
    {
        c = c + n / k;
        k = k * 5;
    }
    cout << c << endl;
    return 0;
}
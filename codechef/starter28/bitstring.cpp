#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll k = 1;
    for (int i = 0; i < n; i++)
    {

        k = (k * 2) % 1000000007;
    }
    cout << k << endl;
    return 0;
}
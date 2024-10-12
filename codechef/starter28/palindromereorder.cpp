#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string n;
    cin >> n;
    ll a[26] = {0};
    for (int i = 0; i < n.length(); i++)
    {
        a[n[i] - 'A']++;
    }
    ll odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 != 0)
        {
            odd++;
        }
    }

    return 0;
}
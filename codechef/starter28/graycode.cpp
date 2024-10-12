#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void graycode(ll n)
{
    if (n <= 0)
    {
        return;
    }
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    int i, j;
    for (i = 2; i < (1 << n); i = i << 1)
    {
        for (j = i - 1; j >= 0; j--)
        {
            v.push_back(v[j]);
        }
        for (j = 0; j < i; j++)
        {
            v[j] = "0" + v[j];
        }
        for (j = i; j < 2 * i; j++)
        {
            v[j] = "1" + v[j];
        }
    }
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    ll n;
    cin >> n;
    graycode(n);

    return 0;
}
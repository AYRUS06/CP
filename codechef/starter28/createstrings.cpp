#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void create_string(string n, ll l, ll r)
{
    static int count = 0;
    if (l == r)
    {
        count++;
        cout << n << " " << count << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(n[l], n[i]);
        create_string(n, l + 1, r);
        swap(n[l], n[i]);
    }
}
int main()
{
    string n;
    cin >> n;
    create_string(n, 0, n.length() - 1);
    return 0;
}
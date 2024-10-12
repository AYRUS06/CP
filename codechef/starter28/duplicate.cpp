#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string n;
    cin >> n;
    int a[26] = {0};
    for (int i = 0; i < n.length(); i++)
    {
        a[n[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 1)
        {
            cout << char(i + 'a') << " " << a[i] << endl;
        }
    }

    return 0;
}
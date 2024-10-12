#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> v;
    while (n > 0)
    {
        int k = n % 2;
        v.push_back(k);
        n = n / 2;
    }
    int r = 1;
    int i = 0;
    int j = 1;
    int l = v.size();
    int m = 0;
    while (i < j && j < l)
    {
        if (((j - i) % 2 == 1 && v[i] != v[j]) || ((j - i) % 2 == 0 && v[i] == v[j]))
        {
            r++;
            j++;
        }
        else
        {
            i = j;
            j++;
            m = max(r, m);
            r = 1;
        }
    }
    cout << m << endl;

    return 0;
}
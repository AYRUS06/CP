#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int l;
    cin >> l;
    sort(v.begin(), v.end());
    int j = v.size() - 1;
    int i = 0;
    int r = 0;
    while (i < j)
    {
        if (v[i] + v[j] <= l)
        {
            i++;
            j--;
            r++;
        }
        else
        {
            j--;
            r++;
        }
    }
    cout << r << endl;
    return 0;
}
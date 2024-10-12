#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;
    int max = 0;
    for (int i = 0; i < n.length() - 1; i++)
    {
        if (n[i] == n[i + 1])
        {
            count++;
        }
        else
        {
            max = max > count ? max : count;
            count = 0;
        }
    }
    if (max != 0 && count <= max)
        cout << max + 1;
    else
        cout << count + 1;

    return 0;
}
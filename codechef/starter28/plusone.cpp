#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    vector<char> ch;
    int k = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        k = (k + stoi(s[i]) + 1) / 10;
        int p = (k + stoi(s[i]) + 1) % 10;
        ch.push_back(p);
    }
    for (int i = 0; i < ch.lenght())
    {
        int k =
    }
    return 0;
}
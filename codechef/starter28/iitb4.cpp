#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void recursion(int n)
{
    if (n < 0)
        cout << n;
    else
    {
        recursion(n / 2);

        cout << n % 2;
    }
}
int main()
{
    recursion(37);
    return 0;
}
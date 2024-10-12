#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    vector<ll> v1;
    ll z = 0;
    ll k = (n * (n + 1)) / 2;
    if (n < 3)
        cout << "NO" << endl;
    else
    {
        if (k % 2 == 0)
        {
            cout << "YES" << endl;

            while (n > 0)
            {

                if (z <= (k / 2))
                {
                    if ((z + n) > (k / 2))
                    {
                        v1.push_back(n);
                        n--;
                    }
                    else
                    {
                        v.push_back(n);
                        z = z + n;
                        n--;
                    }
                }
            }
            cout << v.size() << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            cout << v1.size() << endl;
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i] << " ";
            }
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
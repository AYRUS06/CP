#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

string calculate(string a1, string a2)
{
    int sum = 0;
    int n1 = a2.length();
    long double d = stold(a1);
    a1 = to_string(d);
    int l = a1.length() - 1;
    int k = 0;
    int i = l;
    int f = a1[0] - '0';
    if (d >= 1 || d <= -1)
    {
        while (l > 0)
        {
            if (a1[l] != '.')
            {
                sum += a1[l];
            }
            else if (a1[l] == '.')
            {
                k = 1;
            }
            if (k > 0)
                k++;

            l--;
        }
        k--;
    }
    else
    {
        while (a1[i] != '.')
        {
            if (a1[i] > 0)
            {
                sum += a1[i];
                f = a1[i] - '0';
            }

            i--;
            k--;
        }
    }

    while (sum > 9)
    {
        int q = sum;
        int r = 0;
        while (q)
        {
            r += q % 10;
            q /= 10;
        }
        sum = r;
    }
    while (k > 9)
    {
        int q = k;
        int r = 0;
        while (q)
        {
            r += q % 10;
            q /= 10;
        }
        k = r;
    }
    if (k > -9)
    {
        k = k * (-1);
        while (k > 9)
        {
            int q = k;
            int r = 0;
            while (q)
            {
                r += q % 10;
                q /= 10;
            }
            k = r;
        }
        k = k * (-1);
    }

    vector<string> v{"zer", "one", "two", "thr", "for", "fiv", "six", "sev", "eig", "nin"};
    string s1 = v[f] + '.' + v[sum] + 'e';
    if (k >= 0)
        s1 += '+' + v[k];
    else
        s1 += '-' + v[k];
    s1 += '@';
    if (k % 2 == 0)
    {
        for (int i = 0; i < n1; i = i + 2)
        {
            s1 += a2[i];
        }
    }
    else
    {
        if (n1 > 0)
        {
            for (int i = 0; i < n1; i = i + 2)
                s1 += a2[i];
        }
    }
    return s1;
}
int main()
{
    int t;
    cin >> t;
    for (int j = 1; j < t; j++)
    {
        string a;
        cin >> a;
        int l1 = a.length();
        string s = "";
        string a1 = "";
        string a2 = "";
        string s1 = "";
        string s2 = "";
        int i = 0;
        while (a[i] != ' ')
        {
            if (a[i] == '.' || (a[i] >= '0' && a[i] <= '9'))
            {
                a1 += a[i];
                i++;
            }
            else if (a[i] = ' ')
            {

                break;
            }
            else
            {
                s1 = "null";
                break;
            }
        }

        i++;
        while (a[i])
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a2 += a[i];
                i++;
            }
            else if (!(a[i] >= 'a' && a[i] <= 'z'))
            {
                s2 = "null";
            }
        }

        if (s1 == "null" || s2 == "null")
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            s = calculate(a1, a2);
        }
        cout << s << endl;
    }

    return 0;
}
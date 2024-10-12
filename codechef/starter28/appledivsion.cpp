// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// ll appledivision(ll a[], ll i, ll t, ll n)
// {
//     if (i == n)
//     {
//         return abs((t - a[i]) - (a[i]));
//     }
//     return min(appledivision(a, i + a[n], t, n - 1), appledivision(a, i, t, n - 1));
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     ll a[n];
//     ll t = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         t += a[i];
//     }
//     cout << appledivision(a, 0, t, n - 1) << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define int long long int
int findminans(int *arr, int currsum, int totalsum, int i)
{
    if (i == 0)
        return abs((totalsum - currsum) - currsum);

    return min(findminans(arr, currsum + arr[i], totalsum, i - 1), findminans(arr, currsum, totalsum, i - 1));
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int *arr = new int[n];
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalsum += arr[i];
    }

    cout << findminans(arr, 0, totalsum, n - 1) << endl;
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int maxArea(int height[], int n)
{

    long long int i = 0, j = n - 1, max = -1;
    while (i < j)
    {
        long long int t = min(height[i], height[j]) * (j - i + 1);
        if (t > max)
            max = t;
        if (height[i] <= height[j])
            i++;
        else if (height[i] > height[j])
            j++;
    }
    return max;
}
int main()
{
    int max = 0;
    int n;
    cin >> n;
    int height[n] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height, n);
    return 0;
}